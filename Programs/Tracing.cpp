#include<stdio.h>


// quiz na di ko magets kung pano nangyari

/*
int x=5;
void compute1();
void compute2();
void compute3();

void main()
{
	int x=2;
	printf("\n%d",x); compute1();
	printf("\n%d",x); compute2();
	printf("\n%d",x); compute3();
	printf("\n%d",x); 
}

void compute1()
{
	x++;
	printf("\n%d",x);
}

void compute2()
{
x+=5;
}

void compute3()
{
	x-=2;
}
/////


void pass(int a, int b)
{
	int c;
	for(c=a;c<=b;c+=a)
	printf("%d",c);
	printf("\n");
}

main()
{
	pass(1,5);
	pass(5,15);
	pass(2,10);
	pass(1,1);
	pass(15,45);
}
*/  /////

void test(char a,int b, int c)
{
	switch(a)
	{
		case 'b' : printf("\n%d",b*c); break;
		case 'd' : printf("\n%d",b/c); break;
		case 'a' : printf("\n%d",b+c); break;
		case 'c' : printf("\n%d",b-c); 				// invalid input
		default: puts("invalid call");
		
	}
}

main()
{
	test('a',5,10);
	test('b',10,5);
	test('c',25,25);
	test('d',625,25);
	test('e',5,10);
}
