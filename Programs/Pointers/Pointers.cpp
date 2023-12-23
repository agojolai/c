#include<stdio.h>

/*
// functions and pointers na may manipulation of arithmetic and fake swap yung isa

void value(int x) //di makalabas dahil void
{
	x+=2;
}

void reference(int *x) //pero dito ket ganun e nagbago nmn internally
{
	*x+=2;
}

main()
{
	int x=10;
	printf("before function call: %d", x);
	value(x);
	printf("\nvalue: %d ", x);
	reference(&x);
	printf("\nref: %d", x);
}
*/

void swap(int *x, int *y)		//fake swap
{
	int temp=*x;
		*x=*y;
		*y=temp;
}

void fakeswap (int x, int y)
{
	int temp=x;
		x=y;
		y=temp;
}
main()
{
	int x=5, y=10;
	printf("Orig value %d, %d", x,y);
	fakeswap(x,y);
	printf("\nFakeswap value: %d, %d", x,y);
	swap(&x,&y);
	printf("\nSwap value: %d, %d", x,y);
	
}

