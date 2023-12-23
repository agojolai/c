#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>


main()  //strings and kemeng arithmetic
{
	int x=5, y=10, z=2, a=0,w=0;
	char bwords[80]="naruto";
	char bworr[80]="naruto"; 	//pwede ibahin para di mag-match
	
	a=y*2>x;
	printf("\n%d",a);
	if(z>0)
	{
		printf("\taaa");
		printf ("\tbbbb");
	}
	
	w=strcmp(bwords,bworr); // comparing of words
 		{
			 if (w == 0) // true or match is zero
 			{
 				puts("\tbwords and bworr matches :)");
			}
			
 			else // mismatch or no is one, diba?? 
 			{
 				puts("\tbwords and bworr doesn't match :(");
			}
 		}
}