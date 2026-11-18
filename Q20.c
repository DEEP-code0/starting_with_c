//20. Calculate area of a triangle. A = H*L/2.
#include <stdio.h>
void main(){
    
    float h,l,a;
    printf("Enter the height and len of a triangle :");
    scanf("%f %f",&h,&l);

    a=h*(l/2);
    printf("The area is : %f",a);

}