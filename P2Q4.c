#include <stdio.h>
void main(){
    int x=0,y=0;
    x++;
    y++;
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    //output for above is x=1, y=1
    int x=0,y=0;
    x=y++;
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    //output for above is x=0, y=1
    int x=0,y=0;
    x=++y;
    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    // //output for above is x=1, y=1
    
    
}