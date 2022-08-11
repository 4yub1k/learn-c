//use switch where you need to use alot of else if statements

    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }
#include <stdio.h>
//use switch where you need to use alot of else if statements
//want to check value againt many cases

int main (){
    char grade; //1 byte max

    printf("Enter your grade : ");
    scanf("%s",&grade);

    switch (grade){
        case 'A':
            printf("Congrats it's 100\%");
            break;
        case 'B':
            printf("Congrats it's 80\%");
            break;

        default://if no case
            printf("try again");
            break;
    }
    return 0;
}
// DISADVANTAGES of switch
// float constant cannot be used in the switch as well as in the case.
// You can not use the variable expression in case.
// You cannot use the same constant in two different cases.
// We cannot use the relational expression in case.