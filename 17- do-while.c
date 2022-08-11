#include <stdio.h>
#include <math.h>
//first executes then checks condition 
//In C alwyas take care of data types
int main (){
    float number;
    float check;

    do{
        //keep running till gets even number
        printf("\nEnter the number to check even :");
        scanf("%f",&number);

        //printf("\n %0.1f",remainder(number,2.0));
        check = fmod(number,2);//remainder(double,double)
        printf("%0.1f",check);
    }while (check!=0);
    
    return 0;
}