#include<stdio.h>

int main() {
	
 int guess;
 int secret_number = 12;
 
 while(secret_number <= 20) {
	 
	 printf("Guess a number: \t");
	 scanf("%d", &guess);
	 
	 if(guess > secret_number){
		 printf("Too high!\n");
	 }
	 
	 else if (guess < secret_number) {
		 printf("Too low!\n");
	 }
	 
	 else {
		 printf("Congatulation!\n");
		 break;
	 }
		  
	  	 
 }
	
	return 0;
}