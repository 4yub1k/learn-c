#include <stdio.h>
#include <math.h>
//"" use
// To run code runner as ouput , uncheck the setting>codee-runner>run in terminal
int main(){
    double a;
    double b;
    double c;

    printf("Enter side A :");
    scanf("%lf",&a);

    printf("Enter side B :");
    scanf("%lf",&b);

    c= sqrt(a*a +b*b);

    printf("Side c : %lf",c);

    return 0;
}