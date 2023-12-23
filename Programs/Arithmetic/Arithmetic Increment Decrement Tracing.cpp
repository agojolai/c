#include<stdio.h>

// this program is about evaluating artihmetic and increment and decrement

/*
main() //evaluate
{
	int x=5, y=10, z=2, a=0;
	
	a= x>y && y*2 > x*2;  //1
	printf("\n%d",a);
	
	a= !(x>y && y*2 > x*2);  //2
	printf("\n%d",a);
	
	a= y<x/2 || x/2 *2 == y; //3
	printf("\n%d",a);
	
	a= z*2 >= y/5 && !0; //4 
	printf("\n%d",a);
	
	a= y%2 && x%2; //5
	printf("\n%d",a);
	
	a= !y%2 && !x%2; //6
	printf("\n%d",a);
	
	a= ! (y%2 || x%2); //7
	printf("\n%d",a);
	
	a= ! (y%2 && x%2); //8
	printf("\n%d",a);
	
	a= z+ x*2 >= y+x; //9
	printf("\n%d",a);
	
	a= (z+x)*2 >= y+x; //10
	printf("\n%d",a);
} 

main() // may di ako gets sa arithmetic nito.
{
	int a=3;
	int b=4;
	int c=(a%b)*6;
	float d=c/b;
	float e=(a+b+c+d)/4;
	
	printf("%2.f", c);
	printf("%2.f", d);
	printf("%2.f", e);

}
*/

main()
{
	int a=4, b=8, c=12;
	printf("%d %d %d", a, b, c);
	
	a+=b;
	printf("\n%d", a); //a=12
	
	b++;
	printf("\n%d", b); //memory ng b = 9
	
	c=c+b;
	printf("\n%d", c); // c=21
	
	printf("\n%d %d %d", a, b, c); // 12  9 21
	
	printf("\n%d %d %d", ++a, b++, c--); // 13 9 21 nag add agad sa	pre decrement, hindi sa post
	
	printf("\n%d %d %d", a, b, c); // 13 10 20
	
	printf("\n%d %d %d", a+1, b+2, c+3); //14 12 23 dito nag add pero di naman equal e
	
	printf("\n%d %d %d", a, b, c); // 13 10 20 kaya bumalik sa dating value 
	
	printf("\n%d %d %d", a--, --b, ++c); // 13 9 21
	
	printf("\n%d %d %d", a, b, c); // 12 9 21
	
	printf("\n%d %d %d", a++, ++b, --c); // 12 10 20
	
	printf("\n%d %d %d", a, b, c); // 13 10 20
	
	
}