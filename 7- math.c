//using math library
#include <stdio.h>
#include <math.h>
//"" use
// To run code runner as ouput , uncheck the setting>codee-runner>run in terminal
int main (){
    
    double a = sqrt(9);
    double b = pow(2,2);
    int a1 = round(4.22);
    int a2 = ceil(4.22);
    int a3 = floor(2.11);
    //sin(),log(),tan() see math.h library for more

    printf("\n%d",a1);//4
    printf("\n%d",a2);//5
    printf("\n%d",a3);//2
    return 0;
}