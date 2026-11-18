//10. Convert dollars into pound where 1S = 48 Ra And 1 pound = 70 Ra.

#include <stdio.h>
void main(){
 
//Taking the input from user of dollars to convert it into pound.
    int D;
    printf("\n\nEnter the amount of Dollars :");
    scanf("%d",&D);

//Firstly we will convert dollars into rupees.
    float R=D*48;

//Now we will convert rupees into pound.
    float P=R/70;
    printf("\n\nThe amount in pound is : %.2f\n\n",P);
}