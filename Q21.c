//21 Calculate net salary
//where net salary = gross salary + allowance - deduction.
//Allowances are 10% while deductions are 3% of gross salary.

#include <stdio.h>
void main(){

    float gs,a,d,ns;

    printf("Enter the gross salary :");
    scanf("%f",&gs);

    ns=gs+(gs*0.1)-(gs*0.03);
    printf("\nThe net salary is : %.2f",ns);

}