/*--------------------------------------------------------------------------------------
Nome:Ryan Fernando da Silva Leopoldino
Data:05/11/19
Programa: aula 3
---------------------------------------------------------------------------------------*/

#include <18f4550.H>
#device adc = 10

#fuses XT, NOWDT, NOPROTECT, PUT, NOBROWNOUT, NOLVP, NOCPD, NOWRT
#use delay(clock=4000000)
#include <flex_lcd.c>

#define ESPERA_MS 250
#define COLUNA1 PIN_E0
#define COLUNA2 PIN_E1
#define COLUNA3 PIN_E2
#define LINHA1 PIN_A0
#define LINHA2 PIN_A1
#define LINHA3 PIN_A2
#define LINHA4 PIN_A3

signed int le_teclado(void);
//int varre_coluna(int1, int1,int1)
int tecla_lida;

//--------------------------------------------------------------------------------
//Caracter 0>CGRAM padrão 5x7 para biblioteca flex_lcd

const char linha_0[] = {0b00000110,
						0b00001001,
						0b00001001,
						0b00000110,
						0b00000000,
						0b00000000,
						0b00000000,
						0b00000000};

const char linha_1[] = {0b00011111,
						0b00011111,
						0b00011000,
						0b00011111,
						0b00011000,
						0b00011111,
						0b00011111,
						0b00000000};

const char linha_2[] = {0b00011111,
						0b00011111,
						0b00011000,
						0b00011000,
						0b00011000,
						0b00011111,
						0b00011111,
						0b00000000};

const char linha_3[] = {0b11111111,
						0b11111111,
						0b00011000,
						0b00011000,
						0b00011000,
						0b00011000,
						0b00011000,
						0b00000000};

void Ex_LCD_0(char Ex_x, char Ex_y)
{
	char f;
	lcd_send_byte(0,0x40);
	for(f = 0; f<=7;f++)
	{
		lcd_send_byte(1,linha_1[f])
	}
	lcd_gotoxy(Ex_x,Ex_y);
	lcd_putc(0);
}

void Ex_LCD_1(char Ex_x, char Ex_y)
{
	char f;
	lcd_send_byte(0,0x48);
	for(f = 0; f<=7;f++)
	{
		lcd_send_byte(1,linha_1[f])
	}
	lcd_gotoxy(Ex_x,Ex_y);
	lcd_putc(1);
}

void Ex_LCD_2(char Ex_x, char Ex_y)
{
	char f;
	lcd_send_byte(0,0x50);
	for(f = 0; f<=7;f++)
	{
		lcd_send_byte(1,linha_1[f])
	}
	lcd_gotoxy(Ex_x,Ex_y);
	lcd_putc(2);
}

void Ex_LCD_3(char Ex_x, char Ex_y)
{
	char f;
	lcd_send_byte(0,0x58);
	for(f = 0; f<=7;f++)
	{
		lcd_send_byte(1,linha_1[f])
	}
	lcd_gotoxy(Ex_x,Ex_y);
	lcd_putc(3);
}

//--------------------------------------------------------------------

void main ()
{
int16 bola, temperatura;
float resultado, resultemp;

	setup_adc_ports(AN0_TO_AN2|VSS_VDD);   //CONFIGURA OS PORTS AN0, AN1 e AN2 COMO ENTRADAS ANALOGICAS 
	setup_adc(ADC_CLOCK_DIV_2);
	setup_vref(FALSE);

	lcd_init();
	delay_ms(500);
	lcd_gotoxy(5,1);
	
	Ex_LCD_1(1,1);
	Ex_LCD_2(2,1);
	Ex_LCD_1(3,1);
	Ex_LCD_3(4,1);

	lcd_putc("AP a melhor");

	lcd_gotoxy(1,2);
	lcd_putc("ETEC de sorocaba");
	delay_ms(1000);

	output_b(0);

while(TRUE)
	{
	tecla_lida = le_teclado();
	if(tecla_lida >= 0)
	{
		output_d(tecla_lida);
		output_high(PIN_E0):
		delay_ms(1);
		output_low(PIN_E0); //pisca led
	}
	delay_ms(	esperta_ms);	

	set_adc_channel(2);
	bola = read_adc();

	set_adc_channel(0);
	temperatura = read_adc();

	resultado = (5.0*bola)/(1024.0);

	resultado = (5.0*temperatura)/(1024.0);



signed int le_teclado(void)			
{	
	unsigned char button =0;
	output_high (PIN_B0);					//Coloca 1 em B0 (linha 0)
	delay_ms(1);							
	if(input(PIN_B3)) button = 3;			//Le a coluna 0	
	else if(input(PIN_B4)) button=6;       //le a coluna 1
	else if(input(PIN_B5)) button=9;       //le a coluna 2
	else if(input(PIN_B6)) button=12;      //le a coluna 3
	output_low(PIN_B0);						//coloca 0 em B0
	
	output_high(PIN_B1);                   //Coloca 1 em B1(linha1)	
	delay_ms(1);						    
	if(input(PIN_B3)) button =2;		    //Le a coluna 0	
	else if(input(PIN_B4)) button=5;       //Le a coluna 1	
	else if(input(PIN_B5)) button=8;      //Le a coluna 2	
	else if(input(PIN_B6)) button=11;     //Le a coluna 3	
	output_low(PIN_B1);						//coloca 0 em B2
	
	
	output_high(PIN_B2);                  //Coloca 1 em B2(linha2)	
	delay_ms(1);						    
	if(input(PIN_B3)) button =1;		    //Le a coluna 0	
	else if(input(PIN_B4)) button=4;        //Le a coluna 1	
	else if(input(PIN_B5)) button=7;        //Le a coluna 2	
	else if(input(PIN_B6)) button=10;       //Le a coluna 3	
	output_low(PIN_B2);						//coloca 0 em B3
	
	delay_ms(2);
	
	return(button);
	
}

	