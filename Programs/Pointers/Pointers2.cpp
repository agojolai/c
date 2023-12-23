#include<stdio.h>

//program about pointers and addresses
main()
{
	int *intPtr;
	char *charPtr;
	float *flot;
	double *dobol;
	
	int x=3;
	char w='c';
	float yea= 85.88753;
	double trobol= 96.33;
	
		
	printf("\nvalue of int x: %d ", x); // printing values
	printf("\nvalue of  char hehe: %c", w);
	printf("\nvalue of float yea: %f", yea);
	printf("\nvalue of double trobol %lf:", trobol);
		
	printf("\n\naddress of int x: %d ", &x); // printing the addresses
	printf("\naddress of char hehe: %d", &w);
	printf("\naddress of float yea: %d", &yea);
	printf("\naddress of double trouble: %d", &trobol);
	
	intPtr = &x; // storing the addresses to pointer
	charPtr = &w;
	flot = &yea;
	dobol = &trobol;
	
	printf("\n\naddress of int x on pointer: %d ", intPtr); // output address on the said pointer
	printf("\naddress of char hehe on pointer:%d ", charPtr);
	printf("\naddress of flot yea on pointer:%d ", flot);
	printf("\naddress of dobol trobol on pointer:%d", dobol);
	
	printf("\n\nvalue of int x on pointer: %d", *intPtr); // value of variable on pointer
	printf("\nvalue of char hehe on pointer: %c", *charPtr);
	printf("\nvalue of flot yea on pointer: %f", *flot);
	printf("\nvalue of dobol trobol on pointer:%lf", *dobol);
	
	*intPtr += 10; // changing values thru pointer
	*charPtr += 10 ;
	*flot = 100;
	*dobol -= 1.99;
	
	printf("\n\nnew value of int x: %d ", x); // new value on variable, the new value
	printf("\nnew value of  char hehe: %c", w); // can also be seen on pointer
	printf("\nnew value of float yea: %f", yea);
	printf("\nnew value of double trobol: %lf", trobol);
	

}