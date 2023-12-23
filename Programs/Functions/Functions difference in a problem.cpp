#include<stdio.h>

//program about 4 functions

void oa_1()  // function 1
{
	
	int x;
	printf (" Enter a number in x: ");
	scanf (" %d", &x);
	if(x%2==0)
		puts ("no. is even");
	else 
		puts ("no. is odd");
}

void oa_2 (int x) // funciton 2
{
	if (x%2==0)
		puts ("no. is even");
	else 
		puts ("no. is odd");
}

int oa_3() // function 3
{
	int x;
	printf("Enter a number in x");
	scanf("%d", &x);
	return x; 
}

int oa_4(int x) // function 4
{
	if(x%2==0)
		return 0;
	else 
		return 1;
}

main()
{ 
 //without using a function
/*	int x;
	printf("Enter a number in x");
	scanf("%d", &x);
	if(x%2==0)
		puts ("no. is even");
	else 
		puts ("no. is odd");
*/		
		
//	oa_1(); //function 1
	
/*	//function 2, simple function
	int x;
	printf("Enter a number in x");
	scanf("%d", &x);
	oa_2(x); // function call
*/

/*	//function 3, opposite of function 2
	int y;
	y= oa_3();
	if(y%2==0)
		puts ("no. is even");
	else 
		puts ("no. is odd");
*/

/*	//function 4, opposite of function 1
	int x,y;
	printf("Enter a number in x");
	scanf("%d", &x);
	y=oa_4(x);
	if(y==0)
		puts ("no. is even");
	else 
		puts ("no. is odd");
*/	
}