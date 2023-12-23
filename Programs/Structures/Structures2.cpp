#include<stdio.h>
//program about record and struct
struct grades
{
	int no;
	char name[15];
	float midterm;
	float finals;
	float average;
} record[5]={{1,"Bobby     ",1.5,1},{2,"Warren    ",3,3.5},{3,"Jubilation",4,3},{4,"Charles   ",3,1},{5,"Alex      ",1.75,2.25}};

void average(struct grades y[])
{
	int x;
	for (x=0;x<=4;x++)
		{
		y[x].average =(y[x].midterm+y[x].finals)/2  ;
		}
		
}

main()
{
	int x;
	average(record);
	printf("#\tName\t\tMidterm\t\tFinals\t\tAverage\n");
	 for (x=0;x<=4;x++)
	 {
	 	printf("\n%d",record[x].no);
	 	printf("\t%s",record[x].name);
	 	printf("\t%.2f",record[x].midterm);
	 	printf("\t\t%.2f",record[x].finals);
	 	printf("\t\t%.2f",record[x].average);
	 }
}