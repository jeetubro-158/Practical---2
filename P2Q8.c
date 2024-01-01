#include <stdio.h>
void main(){
    int num1,num2;
    b:
    printf("Enter any two Numbers of two digits :\n");
    scanf("%d %d", &num1,&num2);
    
    if(num1 < 100 && num2 < 100){
    printf("a = %d & b = %d", num1,num2);
    }
    else{
        goto b;
    }

}