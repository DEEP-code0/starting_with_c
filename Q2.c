//Q2.Subtract two numbers
#include <stdio.h>
int main(){
    int a=33,b=23;
    
    printf("The difference of this two number : %d\n",a-b);
    int sub=b-a;
    printf("The difference of this two number : %d\n",sub);

//User inputed substraction 
    int c,d;
    printf("Enter the first number:");
    scanf("%d",&c);
    printf("Enter the second number:");
    scanf("%d",&d);

    int sub1=c-d;
    printf("Result of substraction: %d\n",sub1);

}