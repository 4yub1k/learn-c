#include <stdio.h>

int abc=1; //global varibale
// static datatype variable = value, stays throwout program execution.
// static int a=1; 
int main (){
    printf("tab \tThis is C print enter \r enter");
    printf("\"this is quote \"");
    int x=123;// x is variable (local variable)
    float y=12.0;
    float output= x/y;
    char c = 'c'; //single value
    char arr[]="hello"; //use double quotes arrays
    printf("output is %0.2f, char = %c, arry= %s",output,c,arr);
    return 0; //if no errors return zero else -1
}