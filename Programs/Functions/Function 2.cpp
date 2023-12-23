#include<stdio.h>
#include<windows.h> //function definition
#include<conio.h>
#include<ctype.h>
 //program about (function 2) squaring and cubing
using namespace std;

	
void gotoxy (int x, int y) //function definition
 {
			HANDLE col=GetStdHandle(STD_OUTPUT_HANDLE);
			COORD row;
			row.X=x;
			row.Y=y;
			SetConsoleCursorPosition(col,row);
}

void compute (int x,int y) 
 { if (x==1) 
printf("\nThe square of %d is %d",y,y*y);  else if (x==2) 
printf("\nThe cube of %d is %d" ,y,y*y*y);  else 
printf("\n%d",y); 
 }// end of method compute 


main() 
{ compute(1,5);  
 compute(2,5); 
 compute(3,5);  
} 
