#include <stdio.h>
 
 int main() {
float pi=3.142; 
 float radius ,height;
 float SurfaceArea,volume;
   
   printf("Enter the radius \t");
   scanf("%f",&radius);
   
   printf("Enter the height \t");
   scanf("%f",&height);
   
   SurfaceArea=2*pi*radius*radius +2*pi*radius*height;
   volume=pi*radius*radius*height;
   
   printf("SurfaceArea=%.2f\n",SurfaceArea);
   printf("volume=%.2f\n",volume);
   
   return 0;
   }