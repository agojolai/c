#include <stdio.h>
# define p printf

main()
{
	int amount, e1000, e500, e200, e100, e50, e20, e10, e5, e1;
	p ("Enter an Amount\n");
	scanf (" %d", &amount);
	e1000 =amount/1000;
	p ("\n1000 : %d" , e1000);
	
	e500 =amount%1000/500;
	p ("\n500 : %d", e500);
	
	e200 = amount%1000%500/200;
	p ("\n200 : %d" , e200);
	
	e100 = amount%1000%500%200/100;
	p ("\n100 : %d" , e100);
	
	e50 = amount%1000%500%200%100/50;
	p ("\n50 : %d" , e50);
	
	e20 = amount%1000%500%200%100%50/20;
	p ("\n20 : %d" , e20);
	
	e10 = amount%1000%500%200%100%50%20/10;
	p ("\n10 : %d" , e10);
	
	e5 = amount%1000%500%200%100%50%20%10/5;
	p ("\n5 : %d" , e5);
	
	e1 = amount%1000%500%200%100%50%20%10%5/1;
	p ("\n1 : %d" , e1);
	
	
	
	
}
