#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>

//program about gotoxy

using namespace std;


void gotoxy (int x, int y)				//function definition
{
		HANDLE col=GetStdHandle(STD_OUTPUT_HANDLE);
		COORD row;
		row.X=x;
		row.Y=y;
		SetConsoleCursorPosition(col,row);
}
void exit_screen()
{
	gotoxy(5,5);		//function call
	printf("end of program");
    gotoxy(5,6);
	puts("thank you");
    gotoxy(5,7);
	puts("have a nice week end");	
}

main()
{
	exit_screen();
}