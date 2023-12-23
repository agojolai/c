#include<string.h>
#include<stdio.h>

//program about  record and struct
	struct Student
		{
		char name[10];
		char course[6];
		int age;
		}	
	record[3]; //= {{"Kent", "BSIT", 30},{"Barry", "BSIT", 25},{"Ghorl", "BSIT", 35}};
	
main()
{
/*
	int x;
	printf("Namet\tCourse\tAge\n");
		for(x=0;x<=2;x++)
		{
		printf("%s\t",record[x].name);
		printf("%s\t",record[x].course);
		printf("%d\n",record[x].age);
		}
	*/	 
		int x;
	printf("\nInput a new set\n");
		for(x=0;x<=2;x++)
		{
			printf("Enter student name:");scanf("\n");gets(record[x].name);
			printf("Enter Program: "); gets(record[x].course);
			printf("Enter Age: "); scanf("%d",&record[x].age);
		}
		
		printf("\nName\tCourse\tAge\n");
		for(x=0;x<=2;x++)
		{
		printf("%s\t",record[x].name);
		printf("%s\t",record[x].course);
		printf("%d\n",record[x].age);
		}	
		

}




