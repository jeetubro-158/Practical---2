#include <stdio.h>
void main(){
    int odd;
    printf("Enter the odd Number : ");
    scanf("%d", &odd);
    if (odd % 2 != 0){
        printf("before even Number = %d\n", (--odd));
        printf("after even Number = %d\n", (2+odd));
    }
    else
    printf("Invalid Input");
}