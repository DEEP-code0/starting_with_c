//12 Convert kgs into grams.
#include <stdio.h>
 void main(){

    float kg;
    printf("Enter kilograms : ");
    scanf("%f",&kg);

    float g=kg*1000;
    printf("The weight in grams is : %.2f\n",g);
    
 }