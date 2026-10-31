#include<stdio.h>

int main(){
	int choice;
	
printf("Select data bundle\n");
printf("1.100MB @ 50KES\n");
printf("2.500MB @ 200KES\n");
printf("3.1GB @ 350KES\n");
printf("4.2GB @ 600KES\n");

printf("Enter your choice (1-4): \t");
scanf("%d",&choice);

if(choice==1){
	printf("You selected 100MB.cost=50KES");
	}
	else if(choice==2){
		printf("You selected 500MB. cost=200KES");
	}
	else if(choice==3){
		printf("You selected 1GB. cost=350KES");}
		
		else if(choice==4){
		printf("You selected 2GB. cost=600KES");}
		
	else {
		printf("invalid choice");}
		
		return 0;
}

