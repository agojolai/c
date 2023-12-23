#include<stdio.h>
// program about tracing
/*
main()
{
	char y[80]= "abacndgb khgiwriazpb";
	int a;
	for(a=2;a<=20;a+=2) // a=2 so start yung sunod, then diba a, count twos, then n, then yes
	{
		putchar(y[a]); // ang hirap 
	}
} 


main ()
{
	int x;
	int y;
	
	for(x=1;x<=3;x++)
	{
		for (y=1;y<=x;y++)
			printf("%d", x);
			printf("\n");
	}
}

*/

main()
{
	int a=2, b=6, c=4;
	printf("%d %d %d", a, b, c);
	a++;
	printf("\n%d",a); // 3
	--b;
	printf("\n%d",b); //5
	c=a+b;	
	printf("\n%d",c); //8
	
	printf("\n%d %d %d", ++a, b++, c--);	// 4 5 8
	printf("\n%d %d %d", ++a, b++, c--);	// 5 6 7
	printf("\n%d %d %d", a, b, c);			// 5 7 6
	printf("\n%d %d %d", a+1, b+2, c+3);	// 6 9 9
	printf("\n%d %d %d", ++a, b--, c++);	// 6 7 6
	printf("\n%d %d %d", a++, ++b, --c);	// 6 7 6
	printf("\n%d %d %d", a+=1, b+=2, c+=3);	// 8 9 9
	printf("\n%d %d %d", --a, b--, c++);	// 7 9 9
	printf("\n%d %d %d", a, b, c);			// 7 8 10
}