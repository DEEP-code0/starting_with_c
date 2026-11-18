//19. Calculate area of a circle. A = 22/7 *R*R

#include <stdio.h>
#include <math.h>
void main(){
    
    float r,a;
    printf("The radius of circle :");
    scanf("%f",&r);

    a=3.14*pow(r,2);
    printf("\nThe area of cicle is : %.2f",a);
}