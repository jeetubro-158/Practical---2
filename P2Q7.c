#include <stdio.h>
void main(){
    int n1,n2,n3;
    printf("Enter any three Number : \n");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3){
    printf("%d is the Largest Number.", n1);
    }
    else if(n2 > n2 && n2 > n3){
    printf("%d is the Largest Number.", n2);
    }
    else
    printf("%d is the Largest Number.", n3);
}