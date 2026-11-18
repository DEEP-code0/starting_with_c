//17. Calculate area & perimeter of a square. A = L^2, P = 4L.

#include <stdio.h>
#include <math.h>
void main(){

    float L,A,P;
    printf("Enter the length of square :");
    scanf("%f",&L);

    //Area is 
    A=pow(L,2);
    printf("The Area of the square is : %.2f",A);

    //perimeter is
    P=4*L;
    printf("\nThe Perimeter of the square is : %.2f",P);
}