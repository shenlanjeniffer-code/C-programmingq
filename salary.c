#include <stdio.h>
float calculateTax(float gross_salary);
int main(){
	float gross_salary;
	float tax;
	float net_salary;
  printf("Enter the employee's gross_salary \t");
  scanf("%f",&gross_salary);
  
  tax= calculateTax( gross_salary);
  net_salary=gross_salary-tax;
  
  printf("The gross_salary is =%f\n",gross_salary);
 printf("The tax is =%f\n",tax);
 printf("The net_salary is =%f\n",net_salary);
	
	
	
	return 0;
}
float calculateTax(float gross_salary){
	float tax;
	if(gross_salary <=30000){
		tax=gross_salary*0.05;
	}

   else	if(gross_salary <= 59999){
		tax=gross_salary*0.01;
	}
  else if(gross_salary >=60000){
		tax=gross_salary*0.15;
	}
	return tax;
}