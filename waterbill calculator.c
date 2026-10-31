#include<stdio.h>

int main(){
	float units_consumed;
	float waterBill;
	
printf("Enter the units consumed: \t");
scanf("%f",&units_consumed);

if(units_consumed<=30){
	waterBill=units_consumed*20;
	}
	
else if(units_consumed<=60){
	waterBill=units_consumed*25;
	}
else{	
		waterBill=units_consumed*30;
	}
	
printf("The total water bill is%.2f",waterBill);
	
	
	return 0;
}