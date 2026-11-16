#include<stdio.h>

float calculateSubtotal(float p1,float p2,float p3,float p4,float p5){
float subtotal;
subtotal=p1+p2+p3+p4+p5;
return subtotal;	
}
float calculateDiscount(float subtotal){
	float discount;
   if(subtotal >=10000){
   	discount=subtotal*0.01;
} 
else if(subtotal>=5000){
	discount=subtotal*0.05;
}
else{
	discount=0;
}
return discount;
}
   	
float calculateFinalAmount(float subtotal,float discount){
float finalAmount;
finalAmount=subtotal-discount;
return finalAmount;
}
	
int main(){
	float price1,price2,price3,price4,price5;
	float subtotal;
	float discount;
	float finalAmount;
	
printf("Enter price of product 1:ksh :\t");
scanf("%f",&price1);	
	
printf("Enter price of product 2:ksh :\t");
scanf("%f",&price2);
		
printf("Enter price of product 3:ksh :\t");
scanf("%f",&price3);

printf("Enter price of product 4:ksh :\t");
scanf("%f",&price4);	

printf("Enter price of product 5:ksh :\t");
scanf("%f",&price5);	

subtotal=calculateSubtotal(price1,price2,price3,price4,price5);
discount=calculateDiscount(subtotal);
finalAmount=calculateFinalAmount(subtotal,discount);

printf("\nSubtotal:ksh%.2f\n",subtotal);
printf("Discount amount:ksh %.2f\n",discount);
printf("Final amount payable:ksh %.2f\n",finalAmount);			
	
	return 0;
}