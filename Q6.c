//Q6. Convert hours into minutes.
#include <stdio.h>
void main(){

//Taking users input of hours to convert it into minutes.
    int H;
    printf("\n\nEnter the number of hours you want to convert into minutes :");
    scanf("%d",&H);

//Now 1 Hour is equal to 60 minutes.
    int min=H*60;
    printf("\nThe minutes is : %d\n\n",min);

}