//16. Calculate interest where I = PRN/100.

#include <stdio.h>
void main(){

    float P,R,N,I;
    
    //Taking input from user of Principal,Rate and Years.

    printf("Enter the Principal,Rate and Years :");
    scanf("%f%f%f",&P,&R,&N);

    //Calculating the interest using the formula I=PRN/100.

    I=(P*R*N)/100;
    printf("The Interest is : %.2f\n",I);

}