#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<dos.h>
#include<ctype.h> // toupper
#include<conio.h> // getche


/*
main()
{
		
	FILE *fptr; // file pointer yung *fptr
	fptr = fopen ("FileHandling.txt","w"); //  rewriting stream"w"
	
	char last[15], first[15], ans= ' ';
	int age;
	printf("Student Name\tAge\n");
	
	printf("\nLast Name: "); scanf("\n"); gets(last);
	printf("First Name: "); gets(first);
	printf("Age: ");scanf("%d",&age);

	fprintf(fptr,"\n%s %s  %d",last, first, age); 	//Write to the stream
	puts("Record has been added to the stream");
	fclose(fptr); 	//close the stream	
}

*/
main()
{
	
	FILE *fptr; // file pointer yung *fptr
	fptr = fopen ("FileHandling.txt","a"); // adding  the stream "a"
	
	char last[15], first[15], ans= ' ';
	int age;
	printf("Student Name\tAge\n");
	
	while (ans != 'N')
	{
		printf("\nLast Name: "); scanf("\n"); gets(last);
		printf("First Name: "); gets(first);
		printf("Age: ");scanf("%d",&age);

		fprintf(fptr,"\n%s %s  %d",last, first, age); 	//Write to the stream
		puts("Record has been added to the stream");
		puts("To view, you can use notepad to open the file");
		printf("Continue? ");
		ans=toupper(getche());
	}

	fclose(fptr); 	//close the stream	
	
	
}


