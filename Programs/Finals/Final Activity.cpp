#include<utility.h>
#include<string.h>
#include<dos.h>


//this program is about file handling with design 
// you can add record and delete records and view them 

	int x;
	char ln[15], fn[15], sn[20];
	float mt, finals, ave=0;
	FILE *fptr;
	

void main_menu();
void create();
void options();					
void input();
void input_loop();
void view();
void exit_screen();
void invalid();

	
	void main_menu()
	{
	system("cls");		
	line2(1,1,80,20); // outer part
	line1(7,3,73,9); // pup
	line1(20,10,60,12); // main menu
	line1(20,13,60,18); // options
	center(5,"Polytechnic University of the Philippines");
	center(7,"San Juan Campus");
	center(6,"San Juan City");
	center(11, "Main Menu");
	printxy(22,14,"A] Create a new file"); // file handling 
	printxy(22,15,"B] Add Record");		// structure
	printxy(22,16,"C] Display"); // file handling kasi may lumang records
	printxy(22,17,"D] Close"); // close
	center(19,"Select an Option");
//	gotoxy(49,19);
	line1(1,21,80,25); // error message

	}
	
	void create () //file handling info
	{
		char op=' ';
		center(22,"Warning!! This will erase all record.");
		center(23,"Proceed? [y/n]");
		gotoxy(48,23);
		op=toupper(getch());
			if (op=='Y')
		{	
		clearportion(2,23,79,24);
		FILE *fptr; // file pointer yung *fptr
		fptr = fopen ("FH.txt","w"); //  rewriting stream "w"
		center(22,"Record has been overwritten to the stream.");
		fclose(fptr); 	//close the stream	
		center(23,"Press any key to go back to Main Menu...");
		gotoxy(61,23);getch();
		}
	}
	
void input ()
	{
	
		system("cls");
		line2(1,1,80,20); // outer part
		line1(3,4,78,6); // add a record
		line1(4,9,77,19); // student info
		line1(1,21,80,25); // error message
		printxy(5,5, "Add a record");

		fptr = fopen ("FH.txt","a"); 
		input_loop();	

		char op=' ';
		
		while (op!='T')
		{
			center(22,"Do you want to continue adding");
			center(23,"records? [y/n]");
			gotoxy(48,23);	
			op=toupper(getch());
			 clearportion(2,22,79,24);
			if (op=='Y')
			{
			input_loop();
			}
			else if (op=='N')
			{
			center(22,"Record has been added to the stream");
			fclose(fptr); 
			center(23,"Press any key to go back to Main Menu...");
			gotoxy(62,23);getch();
			 break;
			}
		}
	}


	void input_loop ()
	{
	
				clearportion(2,22,79,24);
				printxy(6,10,"Student Number: "); 
				printxy(6,12,"Last Name: ");
				printxy(6,14,"First Name: ");
				printxy(6,16,"Midterm: ");
				printxy(6,18,"Finals: ");	 
				gotoxy(23,10);scanf("\n");gets(sn);
				gotoxy(18,12);gets(ln);
				gotoxy(19,14);gets(fn);
				gotoxy(15,16);scanf("%f",&mt);
				gotoxy(14,18);scanf("%f",&finals);
				clearportion(5,10,76,18);
				fprintf(fptr,"\n\n%s %s %s %.2f %.2f",sn, ln, fn, mt, finals);
			
	}
	
	
	void view()
	{

	system("cls");	
	FILE *fptr; 
	fptr = fopen ("FH.txt","r");
		int page=0; //page
		int lctr=0; // line
		int row=9;  // starting row
		int num=0; //no.of records/ page
		int sw=0;// control page # and header
		int tp=0, tf=0; // counting passers 

		while (fscanf(fptr,"%s %s %s %f %f", sn, ln, fn, &mt, &finals) !=EOF)
	{	
		if(sw==0)
				{
				sw=1;
				center(1,"Polytechnic University of the Philippines");
				center(2,"San Juan Campus");
				center(3,"San Juan City");
				page++;
				gotoxy(2,4);
				printf("Page: %d", page);
				printxy(2,6,"#\tStudent#\tStudent Name\t\tMidterm\tFinals\tAverage\tRemarks");
					for(int x=0;x<=79;x++)
					{
					printxy(x,7,"=");
					}
				}
				lctr++;
				num++;
				gotoxy(2,row);printf("%d", lctr);
				gotoxy(8,row);	printf("%s", sn);
				gotoxy(24,row);	printf("%s %s", fn, ln);
				gotoxy(49,row);printf("%.2f", mt);
				gotoxy(56,row);printf("%.2f", finals);
				ave = (mt + finals) / 2;
				gotoxy(64,row);printf("%.2f", ave);
					if (ave <= 3.25)
      				{
      					tp++; // counting of passed
      		    		gotoxy(72,row);printf("Passed");
    		    	}
  		 	    	 else
    			    {
    			    	tf++; // counting of failed
           				gotoxy(72,row);printf("Failed");
        			}
        		row++;
						
        			if (num==3)
					{
						getch();
						clearportion(0,8,80,20);
						row=9;
						num=0;
						sw=0;		
					}
		
				}	
		gotoxy(5,16);printf("Total no. of students: %d", lctr);
		gotoxy(10,17);printf("Passed: %d", tp);
		gotoxy(10,18);printf("Failed: %d",tf);
		
		fclose(fptr); 	
		getch(); 
		clearportion(0,8,80,20);	
		printxy(10,12,"Press any key to go back to Main Menu...");
		gotoxy(50,12);
		getch();	

}

void exit_screen()
{
		gotoxy(20,12);putchar(220);
		gotoxy(20,13);putchar(220);
		gotoxy(20,14);putchar(220);
		gotoxy(20,15);putchar(220);
		gotoxy(20,16);putchar(220);
		gotoxy(20,17);putchar(220);
		gotoxy(20,18);putchar(220);
		gotoxy(20,19);putchar(220);
		gotoxy(21,19);putchar(220);
		gotoxy(23,19);putchar(220);
		
		
		fillscreen(1,1,80,25,220);
	
		clearportion(38,1,38,1);
		clearportion(37,2,39,2);
		clearportion(36,3,40,3);
		clearportion(34,4,41,4);
		clearportion(32,5,42,5);
		clearportion(30,6,44,6);
		clearportion(28,7,47,7);
		clearportion(60,7,61,7);
		clearportion(26,8,50,8);
		clearportion(59,8,62,8);
		
		clearportion(25,9,52,9);
		clearportion(57,9,63,9);
		clearportion(19,9,21,9);
		
		clearportion(24,10,64,10);
		clearportion(18,10,22,10);
		
		clearportion(24,11,62,11);
		clearportion(17,11,22,11);	
		clearportion(16,12,62,12);		
		clearportion(16,13,62,20);
		clearportion(11,21,68,21);
		clearportion(10,22,69,22);
		clearportion(9,23,70,23);
		clearportion(8,24,71,24);
	
		getch();
		center(14,"Thank you!!");
		line1(29,13,51,15);
		
}

main()
{
	char choose=' ';
	while (choose!='D')
{
		main_menu();
		choose=toupper(getch());
		if (choose=='A')
		{
			create();
		}
		else if (choose=='B')
		{
			input();
		}
		else if (choose=='C')
		{
			clearportion(4,21,77,21);
			view();
		}
		else if (choose!='D')
		{
			center(23,"Invalid Input");
			getch();
		}
}
	exit_screen();		

}
