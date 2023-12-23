#include<stdio.h>
#include<conio.h>
#include<windows.h>

void gotoxy(int x,int y)
{
	HANDLE col=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD row;
	row.X=x;
	row.Y=y;
	SetConsoleCursorPosition(col,row);
} 

main()
{
	int x, rows=2;
	
	for(x=1; x<=300; x++)
	{
		gotoxy(5, rows);
		printf("this is ascii # %d %c", x,x);
		rows+=2;
		
		if(rows ==24)
		{
			getch();
			system("cls");
			rows =2;
		}
		
	
	}
}