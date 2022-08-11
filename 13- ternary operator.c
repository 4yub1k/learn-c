#include <stdio.h>

// Syntax
// (condition) ? value_if_true : value_if_false
// The statement evaluates to value_if_true if condition is met, and value_if_false otherwise
int main (){
    int a = 10, b = 20, c;

    if (a < b) {
        c = a;
    }
    else {
        c = b;
    }
    printf("%d", c);

    c = (a < b) ? a : b;
    printf("\n Ternary %d", c);

    return 0;
}