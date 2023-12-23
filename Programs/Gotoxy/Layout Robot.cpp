#include<Utility.h>

//program about robot layout
main()
{
	
	line1(10,6,76,28); // outer part
	line1(6,13,10,22); // LEFT ear, outer line1
	line1(76,13,80,22); // RIGHT ear, outer line1
	fillscreen(8,15,9,20,178); // LEFT ear inner fillscreen
	fillscreen(77,15,78,20,178); // RIGHT ear inner fillscreen
	line1(20,4,66,6);	//1st layer line1
	line1(24,2,62,4);	//2nd layer line1
	line1(28,0,58,2);	//3rd layer line 1
	line1(16,9,32,10);	// LEFT eyebrow
	line1(54,9,70,10);	// RIGHT eyebrow
	line2(18,11,30,17);	// LEFT line2 eyes outer
	line2(56,11,68,17);	//RIGHT line2 eyes outer 
	fillscreen(22,13,26,15,178);//LEFT inner eyes fillscreen
	fillscreen(60,13,64,15,178);// RIGHT inner eyels fillscreen
	line2(38,14,47,21);	//line2 nose
	line1(22,23,64,26); //line1 mouth
	fillscreen(24,24,62,25,178); //mouth inner
	getch();
}