//Q7. Convert minutes into hours.

#include <stdio.h>

void main(){

//Taking input from user of minutes.
    float M;
    printf("\n\nEnter the minutes : ");
    scanf("%.2f",&M);

//Mathamatical equation of minutes to hours.
    float Hour=M/60;
    printf("\n\nThe number of hours : %.2f\n",Hour);


}