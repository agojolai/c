#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>

//program about simple function that performs arithmetic operation

using namespace std;
int x,y,result=0; //global declaration

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
	gotoxy(5,5);
	printf("end of program");
    gotoxy(5,6);
	puts("thank you");
    gotoxy(5,7);
	puts("haahahaa hirap ng acocunting noh");	

}

void add()//simple function
{		//	int x,y,result=0; //local declaration
			printf("\nfirst number ");
			scanf("%d",&x);
			printf("\nsecond number ");
			scanf("%d",&y);
			result=x+y;
			printf("\sum is %d ",result);
			printf("\npress any key to continue...");
			getch();
}

void subtract()
{		//	int x,y,result=0; // local declaration
			printf("\nfirst number ");
			scanf("%d",&x);
			printf("\nsecond number ");
			scanf("%d",&y);
			result=x-y;
			printf("\difference is %d ",result);
			printf("\npress any key to continue...");
			getch();
}

//int x,y,result; // local declaration
main()
{

	int ans;
	while(ans != 'C')
	//int x,y, result=0;

	{	system("cls");
		printf("\n1] Add ");
	    printf("\n2] Subtract");
		printf("\n3] Quit");
		printf("\nSelect an option: ");
		scanf("%d", &ans);
		system("cls");
		if (ans==1)
			add();//function call
		else if (ans==2)
			subtract();
		else if (ans==3)
			{
				exit_screen();
				break;
			}
		else
		{
			printf("\ninvalid option");
			printf("\npress any key to continue...");
			getch();
	    }
    } 
    
		
}
