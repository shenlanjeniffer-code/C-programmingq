# include<stdio.h>
int main(){
	float revenue[7];
	float total=0;
	int i;
	
printf("Hotel weekely revenue\n");
for (i=0;i<7;i++){

printf("Enter revenue for day %d:",i+1);
scanf("%f",&revenue[i]);
total=total+revenue[i];	
}
printf("\nTotal weekely revenue%.2f\n",total);
printf("Average daily revenue%.2f\n",total/7);

return 0;
}	