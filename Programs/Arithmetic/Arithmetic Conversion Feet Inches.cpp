#include <stdio.h>
#include <conio.h>
#include <ctype.h>
//#define p as printf

// case switch conversion feet and inches

int main()
{   float m1=0, r;
    char mt;

    printf("ENTER MEASURE TO CONVERT(A=FEET-INCHES/ B=INCHES-FEET): ",mt);
    mt=getche(); mt=toupper(mt);
    
    printf("\nENTER MEASUREMENT: ");
    scanf("%f",&m1);
 
    switch (mt){
        case 'A':printf("\n\t  FEET CONVERTED TO INCHES");
                 printf("\n\tMEASUREMENT IN INCHES: %.3f",r=m1*12);
                 break;
        case 'B':printf("\n\t INCHES CONVERTED TO FEET");
                 printf("\n\tMEASUREMENT IN FEET: %.3f",r=m1/12);
                 break;
        default :printf("\n\tINVALID INPUT");
                 break;
      }
    
}
