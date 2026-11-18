//9. Convert Ra into dollars where 1S = 48 Rs.

#include <stdio.h>

void main(){
    float R;
    printf("\n\nEnter the Amount you want to change : ");
    scanf("%.2f",&R);

    float D=R/48;
    printf("\nThe amount in Dollars is : %.2f\n\n",D);

}