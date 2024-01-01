#include <stdio.h>
void main(){
    int dividend,divisor,quo,remain;
    printf("Enter the Dividend and Divisor : \n");
    scanf("%d %d", &dividend, &divisor);
    quo = dividend / divisor;
    remain = dividend % divisor;

    printf("Quotient = %d\t", quo);
    printf("Remainder = %d", remain);
}