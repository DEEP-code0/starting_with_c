//Q5.Add, multiply, subtract and divide two numbers.

#include <stdio.h>

int main(){
   
//Taking numbers from user and scanning it into a and b.
    float a,b;
    printf("\nEnter first number :");
    scanf("%2f",&a);
    printf("Enter second number :");
    scanf("%f",&b);

//Addition of this two number.
    float sum=a+b;
    printf("\nThe sum of two numbers is : %f\n\n",sum);

//Substraction of two numbers.
    float sub=a-b;
    printf("The subtraction of this two number is : %f\n\n",sub);

//Multiplication of those two numbers.
    float mul=a*b;
    printf("The multiplication of number is : %f\n\n",mul);

//Division of those two numbers.
    float div=a/b;
    printf("The division of two number is : %f\n\n",div);

}