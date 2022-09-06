/*--------------------------------------------------------------------------------------
Nome:Arthur Gonçalves Honorato de Souza
Data:10/06/19
Programa: TuTu Quizzer 
---------------------------------------------------------------------------------------*/

#include <18f4550.H>
#use delay(clock=4000000)
#fuses XT, NOWDT, NOPROTECT, PUT, NOBROWNOUT, NOLVP, NOCPD, NOWRT
#include <flex_lcd.c> //Precisa vir depois do delay, se não funciona

#define LEMC	PIN_A5
#define LEMU	PIN_A4

int tecla_lida;
int alternativa;
int pontos = 0;
signed int le_teclado(void);
int feedback();

int feedback()
{	
	int alternativa;
	tecla_lida = le_teclado();
	if(tecla_lida > 0)
	{
		switch(tecla_lida) 
		{
			case 1:
			{
				alternativa = 1; 
			break;
			}
			case 2:
			{
				alternativa = 2;
			break; 
			}
			case 3:
			{
				alternativa = 3;
 			break;
			}
			case 4:
			{
				alternativa = 4; 
			break;
			}
		}
		return(alternativa);
	}
}

void main ()
{
	output_high(LEMC);		//Desliga Display 7seg
	output_high(LEMU);		//Desliga Display 7seg
	lcd_init();
	delay_ms(500);


	while(1)
	{
		lcd_init();
		delay_ms(1000);
		lcd_gotoxy(1,1);
		lcd_putc("TuTu QUIZ       ");
		lcd_gotoxy(1,2);
		lcd_putc("HARDCORE MERMAO!");
		
		delay_ms(2000);

		//ado a ado quem ler é viado

		lcd_gotoxy(1,1);
		lcd_putc("Quantos planetas");	//Primeira questão
		lcd_gotoxy(1,2);
		lcd_putc("Terra cabem     ");

		delay_ms(2000);

		lcd_gotoxy(1,1);
		lcd_putc("dentro do sol?  ");
		lcd_gotoxy(1,2);
		lcd_putc("                ");    

		delay_ms(1000);
		
		lcd_gotoxy(1,1);
		lcd_putc("A) Um Milhao    ");

		delay_ms(1200);
		lcd_gotoxy(1,2);
		lcd_putc("B) Cem          ");  	

		delay_ms(1200);
		lcd_gotoxy(1,1);
		lcd_putc("C) Seiscentos   ");
        lcd_gotoxy(1,2);
		lcd_putc("                ");  

		delay_ms(1200);
		lcd_gotoxy(1,2);
		lcd_putc("D) Dois Milhoes ");

		delay_ms(500);
	
		while(tecla_lida == 0)
		{
			alternativa = feedback();		
		}
		if(alternativa == 1)
		{
			pontos = pontos + 10;
			
			delay_ms(500);
			lcd_gotoxy(1,1);
			printf(lcd_putc "VOCE ACERTOU! %d" pontos);
			output_high(PIN_E0);		//Habilita o Latch
			output_D(0b00000001);		//Muda valor de D1
			output_low(PIN_E0);			//Desabilita o Latch
		}
			else if (alternativa != 1)
		{
			delay_ms(500);
			lcd_gotoxy(1,1);
			lcd_putc("VOCE ERROU BURRO");
		}

		delay_ms(500);

		tecla_lida = 0;
		lcd_gotoxy(1,2);
		lcd_putc("               ");  
		delay_ms(2000);
		lcd_gotoxy(1,1);
		lcd_putc("Em que lugar    ");	//Segunda questão
		lcd_gotoxy(1,2);
		lcd_putc("vivem mais");
		delay_ms(2000);
		lcd_gotoxy(1,1);
		lcd_putc("cangurus do que ");
		lcd_gotoxy(1,2);
		lcd_putc("pessoas?        ");

		delay_ms(1200);
		lcd_gotoxy(1,1);
		lcd_putc("A) Indonesia    ");
		lcd_gotoxy(1,2);
		lcd_putc("                ");

		delay_ms(1200);
		lcd_gotoxy(1,2);
		lcd_putc("B) Nova Zelandia");	

		delay_ms(1200);
		lcd_gotoxy(1,1);
		lcd_putc("C) Australia    ");
		lcd_gotoxy(1,2);
		lcd_putc("                ");  
		delay_ms(1200);
		lcd_gotoxy(1,2);
		lcd_putc("D) Africa do Sul");
		
		delay_ms(500);

		while(tecla_lida == 0)
		{
			alternativa = feedback();
		}
		if(alternativa == 3)
		{
			pontos = pontos + 10;
			delay_ms(500);
			lcd_gotoxy(1,1);
			printf(lcd_putc "VOCE ACERTOU! %d" pontos);
			output_high(PIN_E0);		//Habilita o Latch
			output_D(0b00000001);		//Muda valor de D1
			output_low(PIN_E0);			//Desabilita o Latch
		}
			else if (alternativa != 3)
		{
			delay_ms(500);
			lcd_gotoxy(1,1);
			lcd_putc("VOCE ERROU BURRO");
		}
		delay_ms(500);

		tecla_lida = 0;

		delay_ms(2000);
		lcd_gotoxy(1,1);
		lcd_putc("Quantos olhos a ");	//Terceira questão
		lcd_gotoxy(1,2);
		lcd_putc(" maior parte das");
		delay_ms(2000);
		lcd_gotoxy(1,1);
		lcd_putc("aranhas tem ?   ");
		lcd_gotoxy(1,2);
		lcd_putc("                ");  

		delay_ms(1200);
		lcd_gotoxy(1,1);
		lcd_putc("A) 2            ");

		delay_ms(1200);
		lcd_gotoxy(1,2);
		lcd_putc("B) 4            ");	

		delay_ms(1200);
		lcd_gotoxy(1,1);
		lcd_putc("C) 8            ");
		lcd_gotoxy(1,2);
		lcd_putc("                ");  

		delay_ms(1200);
		lcd_gotoxy(1,2);
		lcd_putc("D) 6            ");
		
		delay_ms(500);

		while(tecla_lida == 0)
		{
			alternativa = feedback();
		}
		if(alternativa == 3)
		{
			pontos = pontos + 10;
			delay_ms(500);
			lcd_gotoxy(1,1);
			printf(lcd_putc "VOCE ACERTOU! %d" pontos);
		}
			else if (alternativa != 3)
		{
			delay_ms(500);
			lcd_gotoxy(1,1);
			lcd_putc("VOCE ERROU BURRO");
		}
		delay_ms(500);

		tecla_lida = 0;
		
		delay_ms(2000);
		lcd_gotoxy(1,1);
		lcd_putc("O que mede a    ");	//Quarta questão
		lcd_gotoxy(1,2);
		lcd_putc("Escala Mercalli?");

		delay_ms(1200);

		lcd_gotoxy(1,1);
		lcd_putc("A) A intensidade");
		lcd_gotoxy(1,2);
		lcd_putc("dos ventos      ");
		delay_ms(1200);
		
		lcd_gotoxy(1,1);
		lcd_putc("B)A intensidade ");
		lcd_gotoxy(1,2);
		lcd_putc("sismica de      ");
		delay_ms(1200);
		lcd_gotoxy(1,1);
		lcd_putc("acordo com os   ");	
		lcd_gotoxy(1,2);
		lcd_putc("danos provocados");

		delay_ms(1200);
		lcd_gotoxy(1,1);
		lcd_putc("C)A resistencia ");
		lcd_gotoxy(1,2);
		lcd_putc("dos minerais    ");
		
		delay_ms(1200);
		lcd_gotoxy(1,1);
		lcd_putc("D)Magnitude de  ");
		lcd_gotoxy(1,2);
		lcd_putc("um terremoto    ");
		
		delay_ms(500);

		while(tecla_lida == 0)
		{
			alternativa = feedback();
		}
		if(alternativa == 2)
		{
			pontos = pontos + 10;
			delay_ms(500);
			lcd_gotoxy(1,1);
			printf(lcd_putc "VOCE ACERTOU! %d" pontos);
			output_high(PIN_E0);		//Habilita o Latch
			output_D(0b00000001);		//Muda valor de D1
			output_low(PIN_E0);			//Desabilita o Latch
		}
			else if (alternativa != 2)
		{
			delay_ms(500);
			lcd_gotoxy(1,1);
			lcd_putc("VOCE ERROU BURRO");
		}
		delay_ms(500);

		tecla_lida = 0;

		delay_ms(2000);
		lcd_gotoxy(1,1);
		lcd_putc("De que sao      ");	//Quinta questão
		lcd_gotoxy(1,2);
		lcd_putc("constituidos os ");
		delay_ms(1800);
		lcd_gotoxy(1,1);
		lcd_putc("diamantes?      ");
        lcd_gotoxy(1,2);
		lcd_putc("                ");  
		
		delay_ms(1800);
		lcd_gotoxy(1,1);
		lcd_putc("A) Grafite      ");

		delay_ms(1800);
		lcd_gotoxy(1,2);
		lcd_putc("B) Osmio        ");	

		delay_ms(1800);
		lcd_gotoxy(1,1);
		lcd_putc("C) Bohrio       ");
		lcd_gotoxy(1,2);
		lcd_putc("                ");  

		delay_ms(1800);
		lcd_gotoxy(1,2);
		lcd_putc("D) Carbono      ");
		
		delay_ms(500);
	
		while(tecla_lida == 0)
		{
			alternativa = feedback();		
		}
		if(alternativa == 4)
		{
			pontos = pontos + 10;
			delay_ms(500);
			lcd_gotoxy(1,1);
			printf(lcd_putc "VOCE ACERTOU! %d" pontos);
			output_high(PIN_E0);		//Habilita o Latch
			output_D(0b00000001);		//Muda valor de D1
			output_low(PIN_E0);			//Desabilita o Latch
		}
			else if (alternativa != 4)
		{
			delay_ms(500);
			lcd_gotoxy(1,1);
			lcd_putc("VOCE ERROU BURRO");
		}
		delay_ms(500);

		tecla_lida = 0;
		
		delay_ms(2000);
		lcd_gotoxy(1,1);
		lcd_putc("Quanto e 286+49?");	//Sexta questão
		lcd_gotoxy(1,2);
		lcd_putc("                ");  
		delay_ms(1200);
		
		lcd_gotoxy(1,1);
		lcd_putc("A) 335          ");

		delay_ms(1200);
		lcd_gotoxy(1,2);
		lcd_putc("B) 311          ");	

		delay_ms(1200);
		lcd_gotoxy(1,1);
		lcd_putc("C)390           ");
		lcd_gotoxy(1,2);
		lcd_putc("                ");  

		delay_ms(1200);
		lcd_gotoxy(1,2);
		lcd_putc("D) 579          ");
		
		delay_ms(500);
	
		while(tecla_lida == 0)
		{
			alternativa = feedback();		
		}
		if(alternativa == 1)
		{
			pontos = pontos + 10;
			
			delay_ms(500);
			lcd_gotoxy(1,1);
			printf(lcd_putc "VOCE ACERTOU! %d" pontos);
			output_high(PIN_E0);		//Habilita o Latch
			output_D(0b00000001);		//Muda valor de D1
			output_low(PIN_E0);			//Desabilita o Latch
		}
			else if (alternativa != 1)
		{
			delay_ms(500);
			lcd_gotoxy(1,1);
			lcd_putc("VOCE ERROU BURRO");
		}
	}
}

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

	