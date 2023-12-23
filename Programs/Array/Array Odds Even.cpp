#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<string.h>

			


main() // a program about segregating odds to even with using arrays
{
	int z[9];
	//int x[5]={1,2,3,4,5};
	int w;

	for(w=0;w<=9;w++)
	{
		printf("enter number for index %d: ",w);
		scanf("%d",&z[w]);
	}
	printf("\nyour input\n");
	 	printf("Odd numbers");
	for(w=0;w<=9;w++)
		{         
		if(z[w]%2) // odd number or pwedeng %2==1
		printf("\nx[%d]=%d",w,z[w]);
		}
		printf("\nEven Numbers");
	for(w=0;w<=9;w++)
		if(z[w]%2==0) // even number
		printf("\nx[%d]=%d",w,z[w]); 
	}