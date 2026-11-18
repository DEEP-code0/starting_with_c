//Q1.Add two numbers

#include <stdio.h>
int main(){
    int a1=12,b1=23;
    int sum1=a1+b1;
    printf("The sum of this two numbers is: %d\n",sum1);

    printf("The sum of this two numbers is: %d\n",a1+b1);

//User input sum of two numbers
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d" ,&b);
    int sum=a+b;
    printf("The sum of numbers is: %d\n",sum);
}
