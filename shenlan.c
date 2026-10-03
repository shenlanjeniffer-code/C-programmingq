/*Name:Jeniffer Mwikali
  reg no:CT100/G/30721/26
  */ 

#include<stdio.h>
int main()
{

  float principal;
  int time;
  int rate;
  float simpleinterest;
  
  printf("Enter the principal \t");
  scanf("%f",&principal);
  
  printf("Enter the time \t");
  scanf("%d",&time);
  
  printf("Enter the rate \t");
  scanf("%d",&rate);
  
  simpleinterest=(principal*time*rate)/100;
  
  printf("simpleinterest=%.2f",simpleinterest);
  
return 0;
}




	
	
s