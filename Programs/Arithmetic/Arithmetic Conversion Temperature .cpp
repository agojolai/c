#include<stdio.h>
# define p printf
#include <conio.h>
#include<ctype.h>

main ()  // process of converting Celsius to Farenheit
{
    float T, C, F;
    char g=' ';
	p ("Input a Temperature: ");
	scanf("%f", &T);
	p ("\nConvert to C or F: ");
   g=toupper(getche());  
		
		if (g=='F')
			{
				F= (T * 9/5) + 32;	
				p ("\n%.2f Celsius : %.2f Farenheit", T, F);
			
			}
		else if (g=='C')
			{
				C= (T-32) * 5/9;
				p ("\n%.2f Farenheit : %.2f Celsius", T, C);
			}  
		
	
}
