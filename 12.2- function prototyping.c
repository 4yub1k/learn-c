#include<stdio.h>
//deaclare function after main
// Function prototype in C is used by the compiler to ensure whether
//      the function call matches the return type and the correct number of arguments 
//      or parameters with its data type of the called function.

// In the absence of the function prototype, a coder might call function
//  improperly without the compiler detecting errors 
//  that may lead to fatal execution-time errors that are difficult to detect.

void printString(char NameString[]);//without body, that function prototyping.
//it  is easier to go to main()
//it is easier to debug
//commonly used in header files, like stdio.h, etc
int main (){
    //to avoid repeating the code, declare function above main
    char name[20];

    printf("Enter you name :");
    scanf("%s",&name);

    printString(name);
    return 0;
}

void printString(char NameString[]){
    int i=0;
    while (NameString[i]!='\0'){
        printf("\t %c",NameString[i]);
        i++;
    }
}