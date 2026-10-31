#include<stdio.h>

int main(){
	int password;
do{
	printf("\nEnter the password: \t");
	scanf("%d",&password);
if(password!=1234){
	printf("Wrong password try again");
	}
}
while(password!=1234) ;
printf("Access granted");

	
return 0;
}