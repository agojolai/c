#include<stdio.h>
#define p printf


main ()  // Process of transmuting score and giving its equivalent
{
  float tg, score, items;     // Input
  p ("Input your score: ");
	scanf("%f", &score);
	p ("Input how many items: ");
	scanf("%f", &items);	
  	tg= score*50/items+50;     // Process
 	p("Transmuted Grade : %.2f\n", tg);     // Output
 	
 		if (tg>=97 && tg<=100)			  //  97-100
 		
		    {	
			p ("Equivalent : 1.0");
			}
			
		else if (tg>=94 && tg<97)		  // 94-96
		
			{		
			 p ("Equivalent : 1.25");
			}
		
    	else if (tg>=91 && tg<94) 		 // 91-93
		
			{
			 p ("Equivalent : 1.5");  
			}
			
	 	else if (tg>=88 && tg<91)		 // 88-90
		
			{
			 p ("Equivalent : 1.75");
			}
			 
		else if (tg>=85 && tg<88)		// 85-87
		
			{
			 p ("Equivalent : 2.0");
			}
			 
		else if (tg>=82 && tg<85)		//82-84
			
			{
			 p ("Equivalent : 2.25");
			}
			 
		else if (tg>=79 && tg<82)		//79-81
		
			{
			 p ("Equivalent : 2.5");
			}
			 
		else if (tg>=76 && tg<79)		//76-78
		
			{
			 p ("Equivalent : 2.75");
			}
			
		else if (tg>=75 && tg<76)		// 75
		
			{
			 p ("Equivalent : 3.0");
			}
			 
		else if (tg>=74 && tg<75) 		// 74      
		
			{
			 p ("Equivalent : 3.25");
			}
			
		else if (tg>=72 && tg<74)		// 72-73
		
			{
			 p ("Equivalent : 3.5");
			}
			
		else if (tg>=70 && tg<72)		// 70-71
		
			{
			 p ("Equivalent : 3.75");
			}
			
		else if (tg>=65 && tg<70)		// 65-69
		
			{
			 p ("Equivalent : 4.0");
			}
			
		else if (tg>=64 && tg<65)		 //64
			
			{
			 p ("Equivalent : 4.25");
			}
			
		else if (tg>=62 && tg<64)		  //62-63
		
			{
			 p ("Equivalent : 4.25");
			}
			
		else if (tg>=60 && tg<62)		// 60-61
		
			{
			 p ("Equivalent : 4.75");
			}
			
		else if (tg>=50 && tg<60)		// 50-59
		
			{
			 p ("Equivalent : 5.0");
			}
			
		else
		
			{
			 p ("Invalid Output");
			}
			
}
