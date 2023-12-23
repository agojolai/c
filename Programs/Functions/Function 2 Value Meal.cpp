#include<stdio.h>
#include<windows.h> //function definition
#include<conio.h> // rev 2 to be finished 
#include<ctype.h>

//program about function no. 2 value meal 1, 2, 3, and quantity and discount
		float v, w;
		int x;
		char meal_type= ' ';	

void meal( int y, float multiply=0,float discount=0, float total=0)

{
			multiply=y*v;
			printf("\nTotal amount: %.2f ",multiply);
			discount=multiply*w;
			printf("\nLess %.2f discount: %.2f ",w,discount);
			total=multiply-discount;
			printf("\nTotal amount due: %.2f", total);	
}


main()

{
		printf("\nTypes of Meal");
	    	printf("\n1: Value meal worth P50 ");
	    	printf("\n2: Value meal worth P70 ");
	    	printf("\n3: Value meal worth P90 ");
			printf("\n\nEnter meal type: ");
			meal_type=getche();
		
			printf("\nEnter quantity: ");
			scanf("%f",&v);
			printf("Enter discount in decimal form: ");
			scanf("%f",&w);
			printf("\nYou ordered value meal %c ",meal_type);
			printf("\nQuantity: %.2f", v);
			
			
		if  (meal_type=='1')
			meal(50);//function call
		else if (meal_type=='2')
		   	meal(70);
		else if (meal_type=='3')
			meal(90);
		else
			printf("Meal is not availabe");	
	
}

