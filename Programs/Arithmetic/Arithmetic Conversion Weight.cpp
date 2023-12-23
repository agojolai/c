#include <stdio.h>
#include <conio.h>
#include <ctype.h>


//program about weight conversion without function
int main()
{
	float weight;
	char unit,convert;

    printf("Select weight to input (A-GRAMS B-KILOGRAMS C-POUNDS): "); unit=toupper(getche());  
    //scanf(" %c", &unit);
    printf("\nENTER WEIGHT: ");
    scanf("%f",&weight);
    printf("CONVERT TO (A-GRAMS B-KILOGRAMS C-POUNDS): "); scanf(" %c", &convert); convert=toupper(convert);

	if(unit=='A'&& convert=='B'){
		printf("WEIGHT IN KILOGRAMS: %.2f",weight/1000);
	}else if(unit=='A' && convert=='C'){
		printf("WEIGHT IN POUNDS: %.2f",weight/453.59237);
	}else if(unit=='B' && convert=='C'){
		printf("WEIGHT IN POUNDS: %.2f",weight*2.20462262);
	}else if(unit=='B' && convert=='A'){
        printf("WEIGHT IN GRAMS: %.2f",weight*1000);
	}else if(unit=='C' && convert=='A'){
        printf("WEIGHT IN GRAMS: %.2f",weight/2.20462262);
	}else if(unit=='C' && convert=='B'){
        printf("WEIGHT IN KILOGRAMS: %.2f",weight*453.59237);
	}else if(unit=='A' && convert=='A'){
		printf("WEIGHT IN GRAMS: %.2f",weight);
	}else if(unit=='B' && convert=='B'){
		printf("WEIGHT IN KILOGRAMS: %.2f",weight);
	}else if(unit=='C' && convert=='C'){
		printf("WEIGHT IN POUNDS: %.2f",weight);
	}else{
	    printf("Invalid Input");
	}
}
