//22. Calculate net sales where net sales = gross sales - 10% discount of gross sales.
#include <stdio.h>
void main(){

    int ns,gs;

    printf("Enter gross sales : ");
    scanf("%d",&gs);

    ns=gs-(gs*0.1);
    printf("The net sales is : %d",ns);
    
}