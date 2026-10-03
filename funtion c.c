#include<stdio.h>
float calculateBill(float numberofunitsconsumed);
int main()
{
	float numberofunitsconsumed;
	float bill;
	
	printf("Enter the number of units consumed: \t");
	scanf("%f",&numberofunitsconsumed);
	
	bill=calculateBill( numberofunitsconsumed);
	printf("The number of units consumed is: %f\n",numberofunitsconsumed);
	printf("The total electricity bill is: %f\n",bill);
	
	return 0;
}

float calculateBill(float numberofunitsconsumed){
	float bill;
	if(numberofunitsconsumed <=100){
		bill=numberofunitsconsumed*10;}
    else if(numberofunitsconsumed <=200){
		 bill=numberofunitsconsumed*15;
	 }
else if(numberofunitsconsumed>200){
		 bill=numberofunitsconsumed*20;s
	 }
return bill;
}	 
	 
	
 