#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<dos.h>
#include<ctype.h> // toupper
#include<conio.h> // getche

//2nd file handling lecture 
main()
{
		FILE *fptr; // file pointer yung *fptr
	fptr = fopen ("FileHandling.txt","r"); // adding  the stream "a", rewriting stream"w"
	
	char last[15], first[15], ans= ' ';
	int age;
	
	printf("Student Name\tAge\n");
		
	while (fscanf(fptr,"%s %s %d", last,first, &age) !=EOF)
	{
			printf("\n%s %s", last, first);
			printf("\t%d",age);
	}
	
	fclose(fptr); 	//close the stream
	
}