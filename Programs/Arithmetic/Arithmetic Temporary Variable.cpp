#include<stdio.h>
# define p printf

//program about swapping variables using temporary variable
main()   // swapping variables
{	
	int a= 10, b = 16 , temp; // temp is temporary.. temporary variable
	p ("\nOriginal Value : a=%d b=%d", a,b ); 
	 temp= a; // nilagay yung laman ni a sa temp
	 a=b; // so wala na laman si a, niolagay naman laman ni b sa a
	 b= temp; // wala nang laman si b, so nilagay yung laman ni temp sa b
	
	p ("\nNew Value : a=%d b=%d", a,b);
}


