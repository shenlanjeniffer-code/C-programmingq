#include <stdio.h>
int main() {
	float annualIncome;
	int age;
	
	printf("Enter the annual income \t");
	scanf("%f",&annualIncome);
	
	printf("Enter the age \t");
	scanf("%d",&age);
	
	if (annualIncome  >= 21000, age >= 21){
        printf("Congratulations you qualify for a loan");
}
 else if (annualIncome  <21000,age<21){
	printf("Unfortunately we are unable to offer you a loan at this moment");
 }
 return 0;
 }

		
	

	

