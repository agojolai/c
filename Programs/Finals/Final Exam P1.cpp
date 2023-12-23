#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>



//this program is about viewing or reading the data written in the txt file. You can put data to the text file manually
// or put iit in the part 2 file
main()
{
	char sname[15];
	char stype= ' ';
	int units;
	int sis;
	int lib;
	int id;
	int misc; 
	int tf;
	int x;
	
	FILE *fp;
	fp = fopen("Student.txt","r");
	printf("Student Name\tStudent Type\tUnits Enrolled\tSIS\tLibrary\tID\tMISC\ttotal Fees");
				
		while(fscanf(fp,"%s %d %d %d %d %d %c",sname, &units, &sis, &lib, &id, &misc, &stype)!=EOF)
		{	 
			strupr(&stype);
			printf("\n\n%s", sname);
				if (stype=='A')
				printf("\t\tFull Scholar ");
			else if (stype=='B')
				printf("\t\tPartial Scholar");
			else if (stype=='C')
				printf("\t\tNon Scholar");
			printf("\t%d", units);
			printf("\t\t%d", sis);
			printf("\t%d", lib);
			printf("\t%d", id);
			printf("\t%d", misc);
			tf=units*12+sis+lib+id+misc;
					if (stype=='A')
				printf("\t%d",tf*0);
			else if (stype=='B')
				printf("\t%d",tf/2);
			else if (stype=='C')
				printf("\t%d",tf);	
		}
			
	
		fclose(fp);
}