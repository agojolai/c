#include <stdio.h>
# define p printf

//program about conversion in hours
main() // mins and hours
{
	int min1, min2, hours;
	p ("Enter number in minutes\n");
	scanf ("%d", &min1);
	hours = min1/60;
	p ("\nhour/s : %d", hours); 
	min2= min1%60;
	p ("\nminute/s : %d", min2);
	
	
	
}

