//23. Calculate average of three subjects along with their total.
#include <stdio.h>
void main(){
    int M,P,C,Total,avg;
    printf("Enter the marks of Math,Physics,Chemistry :");
    scanf("%d %d %d",&M,&P,&C);

    Total=M+P+C;
    printf("\nThe total of all subject is : %d",Total);

    avg=Total/3;
    printf("\nThe avg of three subject is : %d",avg);

}