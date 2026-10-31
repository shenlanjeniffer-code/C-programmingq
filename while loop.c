#include<stdio.h>

int main(){
	int withdrawal;
    int accountBalance;
printf("Enter the account balance: \t");
scanf("%d",&accountBalance);

while(accountBalance>0){
	printf("\nEnter the amount to withdraw: \t");
	scanf("%d",&withdrawal);
	
accountBalance=accountBalance-withdrawal;
printf("\naccountBalance is:%d",accountBalance);
withdrawal++;	
}

return 0;
}