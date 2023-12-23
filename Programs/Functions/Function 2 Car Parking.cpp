#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<string.h>

//this program is about function 2 vehicle type a, b, c, d and how many hours parked, then compute

void park(char vehicle, int x) //function
	{	

	int total;
	int hours;
	
	hours = x;
	
		if(vehicle == 'a'){
			if(x > 4)
			{
				x = x-4;
				total = x*20 + 100;
			}
			else if(x <= 4)
			{
				total = 100;
			}		
		printf("\nVehicle Parked: Car");
		printf("\nNo. of hours parked %d", hours);
		printf("\nTotal amount due: %d", total);
		
		}else if(vehicle == 'b'){
			if(x > 4)
			{
				x = x-4;
				total = x*30 + 150;
			}else if(x <= 4)
			{
				total = 150;
			}
		printf("\nVehicle Parked: SUV");
		printf("\nNo. of hours parked %d", hours);
		printf("\nTotal amount due: %d", total);
		
		}
		
		else if(vehicle == 'c')
		{
			if(x > 4){
				x = x-4;
				total = x*10 + 50;
			}
			else if(x <= 4)
			{
				total = 50;
			}
		printf("\nVehicle Parked: Motorcycle");
		printf("\nNo. of hours parked %d", hours);
		printf("\nTotal amount due: %d", total);
		
		}
		
		else if(vehicle == 'd')
		{
			if(x > 4)
			{
				x = x-4;
				total = x*50 + 300;
			}
			else if(x <= 4)
			{
				total = 300;
			}		
		printf("\nVehicle Parked: Truck");
		printf("\nNo. of hours parked %d", hours);
		printf("\nTotal amount due: %d", total);
		}
		else
		{
			printf("Invalid");
		}
	}

main(){
	int x;
	char vehicle = ' ';
	
	printf("Enter vehicle type: ");
	vehicle=tolower(getche());
	
	printf("\nEnter no. of hours parked: ");
	scanf("%d", &x);
	
	park(vehicle, x);
	
}