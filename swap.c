#include <stdio.h>
#include <string.h>

int main (){
    //important: strcpy(s,y) if y less then s then unexpected results,
    // char x_1[]="xxxx";
    // char y_1[]="yy";
    //make them same size
    // char x_1[10]="xxxx";
    // char y_1[10]="yy";

    char x_1[10]="xxxx";
    char y_1[10]="yyy";
    char z_1[10];

    int x=10,y=20,temp;

    printf("\nx: %d, y: %d ",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("\nswapped x: %d, y: %d\n",x,y);

    //Either run loop swap letter by letter or use strin copy
    printf("\nx_1: %s, y_1: %s ",x_1,y_1);
    strcpy(z_1,x_1); //copy x_1 to z_1
    strcpy(x_1,y_1); //copy y_1 to x_1
    strcpy(y_1,z_1); //copy z_1 to y_1

    printf("\nswapped x_1: %s, y_1: %s\n",x_1,y_1);

    return 0;
}