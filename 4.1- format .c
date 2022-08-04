#include <stdio.h>

int main (){
    float item1= 5.0;
    float item2 = 4.3;
    float item3 = 5.5;
    printf("Item sum is : %f \n",item1+item2+item3);
    printf("Item sum is : %8.2f \n",item1+item2+item3);//left side characters (8),(-8 for right side) 
    printf("Item sum is : %.2f",item1+item2+item3);
    return 0;
}
/*
Item sum is : 14.800000 
Item sum is :    14.80 
Item sum is : 14.80
*/