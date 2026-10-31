#include<stdio.h>

int main(){
	int attendance;
	int averageMarks;
printf("Enter the average marks: \t");
scanf("%d",&averageMarks);

printf("Enter the attendance: \t");
scanf("%d", &attendance); 
	if(attendance >= 75){
		printf("Eligible");
	}
	else if(averageMarks>=40){
		printf("Eligible");
	}
	else{
		printf("Not eligible");
		}
	
	
	
	return 0;
}