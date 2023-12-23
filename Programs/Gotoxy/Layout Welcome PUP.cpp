
#include<stdio.h>
#include<conio.h>
#include<windows.h>

//program about pup layout

using namespace std;


void gotoxy (int x, int y)			
{
		HANDLE col=GetStdHandle(STD_OUTPUT_HANDLE);
		COORD row;
		row.X=x;
		row.Y=y;
		SetConsoleCursorPosition(col,row);
}


void printxy (int col, int row, char word[])
{
	gotoxy(col,row);
	puts(word);
}


void center(int row,char word[])
{
	int col;
	col=(80-strlen(word))/2+1;
	gotoxy(col,row);puts(word);
}

	void line1 (int x1, int y1, int x2, int y2)
{
	int x;
	for (x=x1;x<=x2;x++) //horizontal
	{
		gotoxy(x,y1);putchar(196);
		gotoxy(x,y2);putchar(196);
	}
	for (x=y1;x<=y2;x++) //vertical
	{
		gotoxy(x1,x),putchar(179);
		gotoxy(x2,x),putchar(179);
	}
	{
		gotoxy(x1,y1);putchar(218); //UPPER LEFT
		gotoxy(x2,y1);putchar(191); // UPPER RIGHT
		gotoxy(x1,y2);putchar(192); //LOWER LEFT
		gotoxy(x2,y2);putchar(217); //LOWER RIGHT
		
	}
	
}

	void line2 (int x1, int y1, int x2, int y2)
{
	int x;
	for (x=x1;x<=x2;x++) //horizontal
	{
		gotoxy(x,y1);putchar(205);
		gotoxy(x,y2);putchar(205);
	}
	for (x=y1;x<=y2;x++) //vertical
	{
		gotoxy(x1,x),putchar(186);
		gotoxy(x2,x),putchar(186);
	}
	{
		gotoxy(x1,y1);putchar(201); //UPPER LEFT
		gotoxy(x2,y1);putchar(187); // UPPER RIGHT
		gotoxy(x1,y2);putchar(200); //LOWER LEFT
		gotoxy(x2,y2);putchar(188); //LOWER RIGHT
		
	}
	
}

void box(int col1, int row1, int col2, int row2, char ch)

{
	int x;
	for(x=col1;x<=col2;x++)
	{
		gotoxy(x,row1);putchar(ch);
		gotoxy(x,row2);putchar(ch);
	}
	for(x=row1;x<=row2;x++)
	{
		gotoxy(col1,x);putchar(ch);
		gotoxy(col2,x);putchar(ch);	
	}	
}

void fillscreen(int col1, int row1, int col2, int row2, char ch)
{
	int x,y;
	for(x=col1;x<=col2;x++)
	{
		for(y=row1;y<=row2;y++)
		{
			gotoxy(x,y);putchar(ch);
		}
	}
}

void clearportion(int col1, int row1, int col2, int row2)
{
	int x,y;
	for(x=col1;x<=col2;x++)
	{
		for(y=row1;y<=row2;y++)
		{
			gotoxy(x,y);putchar(' ');
		}
		
	}
}

main()
{
	system("cls");
	box(2,2,78,22,177);
	line2(4,4,76,20);
	line1(6,6,74,18);
	fillscreen(8,8,72,16,178);
	getch();
	clearportion(10,10,70,14);
	printxy(29,11, "Polytechnic University"); // ito yung polytechnic university
	center(2,"Polytechnic University of the Philippines");
	center(3,"San Juan Campus");
	center(4,"San Juan City");
	getch();
	system("cls");
//	fillscreen(2,2,78,24,177);
}