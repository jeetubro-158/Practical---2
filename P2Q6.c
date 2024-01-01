#include <stdio.h>
void main(){
    int Number;
    printf("Entet any Number : ");
    scanf("%d", &Number);
    if (Number == 0)
    printf("ZERO");
    else if(Number > 0)
    printf("POSITIVE");
    else
    printf("NEGATIVE");
}