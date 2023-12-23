#include<stdio.h>
#include<conio.h>

//program about difference of using array and not using array

/* without array
main()
{
	
	
	int a1, a2, a3, a4, a5, sum=0;
	printf ("enter the 5 numbers separated by space");
	scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
	sum=a1+a2+a3+a4+a5;
	printf("\nsum of 5 numbers %d", sum);
	if (a1%2==0)
		printf("\n%d", a1);
	if (a2%2==0)
		printf("\n%d", a2);
	if (a3%2==0)
		printf("\n%d", a3);
	if (a4%2==0)
		printf("\n%d", a4);
	if (a5%2==0)
		printf("\n%d", a5);
	
} */

//using array

main()
{
	int x;
	int a [5];
	int b [5]={3,52,4,9,2};
	for(x=0;x<=4;x++)
		printf("\nb[%d]=%d", x,b[x]);
	
}