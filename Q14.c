//14. Convert celcius into Fahrenheit. F = (9.0/5.0 * C) + 32.

#include <stdio.h>

void main(){

    float c,f;
     printf("Enter the celcius :");
     scanf("%f",&c);
     f=(9./5 * c) + 32;
     printf("The Fahrenheit is : %.2f\n",f);
     return 0;
}