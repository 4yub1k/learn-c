#include <stdio.h>
//use switch where you need to use alot of else if statements
//want to check value againt many cases

int main (){
    char operator; //1 byte max
    double num1;
    double num2;
    //double result; use to store result

    printf("Enter your operator : ");
    scanf("%c",&operator);

    printf("Enter number 1: ");
    scanf("%lf",&num1);

    printf("Enter number 2: ");
    scanf("%lf",&num2);

    switch (operator){
        case '+':
            printf("Addtion : %lf",num1+num2);
            break;
        case '-':
            printf("Subtraction: %lf",num1-num2);
            break;
        case '/':
            if (num2==0);
                printf("Denominator can't be 0");
                break;
            printf("Division : %lf",num1/num2);
            break;
        case '*':
           printf("Multiplication : %ld",num1*num2);

            break;

        default:
            printf("Operator not found");
            break;
    }
    return 0;
}