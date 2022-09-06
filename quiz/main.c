/*--------------------------------------------------------------------------------------
Nome:Anthony Rodrigo dos Anjos 3°AIEM
Data:10/06/19
Programa:TECLADO chave 2.0 turbinado for chan 
---------------------------------------------------------------------------------------*/

#include <18f4550.H>
#use delay(clock=4000000)
#fuses XT, NOWDT, NOPROTECT, PUT, NOBROWNOUT, NOLVP, NOCPD, NOWRT
#include <flex_lcd.c> //Precisa vir depois do delay, se não funciona

#define LEMC	PIN_A5
#define LEMU	PIN_A4

int tecla_lida;
signed int le_teclado(void);
int pergunta1;
int tony();
int x;
int responta0();
void main ()

{
 
	output_high(LEMC);		//Desliga Display 7seg
	output_high(LEMU);		//Desliga Display 7seg


	lcd_init();
	delay_ms(1000);
	lcd_gotoxy(1,1);
	lcd_putc("QUIZ DO TONY");

	while(x<=4)
{
	x++;
	tecla_lida=le_telcado; 
	if(tecla_lida==1)
{
	x = 0;
}


	delay_ms(1000);
	lcd_gotoxy(0,1);
	lcd_putc("QUANTO E 1+1 ");


		delay_ms(1500);

		lcd_gotoxy(0,1);
		lcd_putc(" A)2  B)3     ");
		
		lcd_gotoxy(0,2);
		lcd_putc(" C)3   D)6   ");
		
		delay_ms(1000);		

}
if ( tecla_lida ==0)
		while (tecla_lida==0)
		{
			pergunta1 = tony();		
		}	
		if(pergunta1==1)
		{
		
			lcd_gotoxy(0,1);
			lcd_putc("                  ");

		
			lcd_gotoxy(0,2);
			lcd_putc("                  ");

			delay_ms(100);

			lcd_gotoxy(1,1);
			lcd_putc("Acertou mizera!");
			delay_ms(1000);
           
		}
		else if(pergunta1 != 1){

			lcd_gotoxy(0,1);
			lcd_putc("                  ");

		
			lcd_gotoxy(0,2);
			lcd_putc("                  ");

			delay_ms(100);

			lcd_gotoxy(1,1);
			lcd_putc("    Errou      ");
			delay_ms(1000);
		}
		tecla_lida= 0;

		delay_ms(100);
		lcd_gotoxy(1,2);
		lcd_putc("                   ");
		
	
		delay_ms(100);
		lcd_gotoxy(1,1);
		lcd_putc("  QUANTO E 3*3 ");
	
		delay_ms(1500);

		lcd_gotoxy(0,1);
		lcd_putc(" A)2  B)9       ");
		
	
		
		lcd_gotoxy(0,2);
		lcd_putc(" C)3   D)6       ");
		
		delay_ms(1000);
		
	
		while (tecla_lida == 0)
		{
			pergunta1=tony();		
		}
		
		if(pergunta1==2)
		{

			lcd_gotoxy(0,1);
			lcd_putc("                  ");

		
			lcd_gotoxy(0,2);
			lcd_putc("                  ");

			delay_ms(100);

			lcd_gotoxy(1,1);
			lcd_putc("Acertou mizera!");
			delay_ms(1000);
		}
		else if(pergunta1 !=2){

			lcd_gotoxy(0,1);
			lcd_putc("                  ");

		
			lcd_gotoxy(0,2);
			lcd_putc("                  ");

			delay_ms(100);

			lcd_gotoxy(1,1);
			lcd_putc("    Errou      ");
			delay_ms(1000);
		}
		delay_ms(1000);
		tecla_lida= 0;
		
		delay_ms(1000);
		lcd_gotoxy(1,2);
		lcd_putc("                   ");
 
		delay_ms(1000);
		lcd_gotoxy(1,1);
		lcd_putc("  2+2(4/2)=         ");

		delay_ms(3500);

		lcd_gotoxy(0,1);
		lcd_putc(" A)6  B)1      ");
		
	
		
		lcd_gotoxy(0,2);
		lcd_putc(" C)9   D)10     ");
		
		delay_ms(1000);
		
	
		while (tecla_lida==0)
		{
			pergunta1 = tony();		
		}
		
		if(pergunta1==1)
		{
			lcd_gotoxy(0,1);
			lcd_putc("                  ");

		
			lcd_gotoxy(0,2);
			lcd_putc("                  ");

			delay_ms(100);

			lcd_gotoxy(1,1);
			lcd_putc("Acertou mizera!");
			delay_ms(1000);
		}
		else if(pergunta1 != 1){

		lcd_gotoxy(0,1);
			lcd_putc("                  ");

		
			lcd_gotoxy(0,2);
			lcd_putc("                  ");

			delay_ms(100);

			lcd_gotoxy(1,1);
			lcd_putc("    Errou      ");
			delay_ms(1000);
		}
		tecla_lida= 0;

		delay_ms(1000);
		lcd_gotoxy(1,2);   
		lcd_putc("                   ");

		delay_ms(1000);
		lcd_gotoxy(1,1);
		lcd_putc("O PROXIMO NUMERO");
				
		delay_ms(1500);
		lcd_gotoxy(1,1);
		lcd_putc("  DA SEQUENCIA  ");
		delay_ms(2000);

		lcd_gotoxy(1,1);
		lcd_putc("2,10,12,16,17...");

		delay_ms(3500);

		lcd_gotoxy(0,1);
		lcd_putc(" A)15  B)3        ");
		
		
		lcd_gotoxy(0,2);
		lcd_putc(" C)18   D)20      ");
		
		delay_ms(1000);
		
		
		delay_ms(1000);
	
		while (tecla_lida==0)
		{
			pergunta1 = tony();		
		}
		
		if(pergunta1==3)
		{

			lcd_gotoxy(0,1);
			lcd_putc("                  ");

		
			lcd_gotoxy(0,2);
			lcd_putc("                  ");

			delay_ms(100);

			lcd_gotoxy(1,1);
			lcd_putc("Acertou mizera!");
			delay_ms(1000);
		}
		else if(pergunta1 != 3){

			lcd_gotoxy(0,1);
			lcd_putc("                  ");

			lcd_gotoxy(0,2);
			lcd_putc("                  ");

			delay_ms(100);

			lcd_gotoxy(1,1);
			lcd_putc("    Errou         ");
			delay_ms(1000);
		}
		tecla_lida= 0;
		
		delay_ms(1000);
		lcd_gotoxy(1,2);
		lcd_putc("                    ");
	 
		delay_ms(1500);
		lcd_gotoxy(1,1);
		lcd_putc("4/2(2*2)=        ");

		delay_ms(3500);


		lcd_gotoxy(0,1);
		lcd_putc(" A)4  B)0     ");
		
	
		
		lcd_gotoxy(0,2);
		lcd_putc(" C)6   D)9   ");
		
		delay_ms(1000);
		
		
		delay_ms(1000);

		while (tecla_lida==0)
		{
			pergunta1 = tony();		
		}
		if(pergunta1==3)
		{

			lcd_gotoxy(0,1);
			lcd_putc("                  ");

		
			lcd_gotoxy(0,2);
			lcd_putc("                  ");

			delay_ms(100);

			lcd_gotoxy(1,1);
			lcd_putc("Acertou mizera!");
			delay_ms(1000);
		}
		else if(pergunta1 != 3){

			lcd_gotoxy(0,1);
			lcd_putc("                  ");

		
			lcd_gotoxy(0,2);
			lcd_putc("                  ");

			delay_ms(100);

			lcd_gotoxy(1,1);
			lcd_putc("    Errou      ");
			delay_ms(1000);
		}
break;

}
int tony()
{	
	int resposta;

			tecla_lida=le_teclado();
			if(tecla_lida > 0);
			{
				switch(tecla_lida)
				{
							
					case 1:
					{
						resposta= 1; 
					break;
					}
					case 2:
					{
						resposta= 2;
					break; 
					}
					case 3:
					{
						resposta= 3;
 					break;
					}
					case 4:
					{
						resposta= 4; 
					break;
					}
				}
				return(resposta);
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