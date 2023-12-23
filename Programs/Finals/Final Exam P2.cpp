#include<stdio.h>
#include<conio.h>
#include<ctype.h>

//this program is about adding data to the text file, this is the part two of the code

main()
{
	char sname[10];
	char stype[3];
	int units;
	int sis;
	int lib;
	int id;
	int misc; 
	char ans = 'y';
	int x;
	
	FILE *fp;
	fp = fopen("Student.txt","a");
		while(ans=='y')	
			{	
				printf("Student Name: "); scanf("\n"); gets(sname);
				printf("\nUnits: "); scanf("%f",&units);
				printf("\nSIS: "); 	scanf("%f",&sis);
				printf("\nLibrary: "); scanf("%f",&lib);
				printf("\nID: "); scanf("%f",&id);
				printf("\nMisc: "); scanf("%f",&misc);
				printf("\nStudent Type: "); scanf("\n"); gets(stype); getch(); 
				fprintf(fp,"\n\n%s %d %d %d %d %d %s",sname, units, sis, lib, id, misc, stype);	
				printf("OCn?");
				ans=tolower(getche());
			}
		fclose(fp);
}