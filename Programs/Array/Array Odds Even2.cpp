#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>  

// program about passing array to function and segregation of odds and even before and after


void segregation(int x[]) // segregating odds to even
{
	int y;
	
	 	printf("Odd numbers");
	for(y=0;y<=4;y++)
		{         
		if(x[y]%2) // odd number or pwedeng %2==1
		printf("\nx[%d]=%d",y,x[y]);
		}
		printf("\nEven Numbers");
	for(y=0;y<=4;y++)
		if(x[y]%2==0) // even number
		printf("\nx[%d]=%d",y,x[y]); 
	}

void pass_array (int x[])
{
	int y;
	for (y=0;y<=4;y++)
		x[y]+=2;
}

main()
{ // passing arrays to function
	 int y, z=2;
	 int x[5];//{25, 16, 4, 6, 24};
	 
	 for (y=0;y<=4;y++)
	 {
	 	printf("Enter a number on index %d: ", y);
	 	scanf("%d",&x[y]);
	 }
	 printf("\nOriginal List\n");
	  for (y=0;y<=4;y++)
	 	printf ("%d\n", x[y]);
	
	segregation(x);
	 
	 //for (y=0;y<=4;y++)
	 //	printf ("%d\n", x[y]);
	pass_array(x); // array x is set to pass_array
	puts("\nContents of array x after being sent to pass array");
	 for (y=0;y<=4;y++)
	 	printf ("%d\n", x[y]);
	
	segregation(x);
	
 
 
}

