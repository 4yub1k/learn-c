#include <stdio.h>

//simple code to
//function arguments use there data types
// Argument	Parameter
// Arguments are used while calling the function	
// Parameters are used during the declaration of the function
// Argument is the actual value of this variable that gets passed to function.	
// Parameter is variable in the declaration of the function.
void printString(char NameString[]){ //char string function paramter
    int i=0;
    while (NameString[i]!='\0'){// \0 represents the end of string
        printf("\t %c",NameString[i]);
        i++;
    }
}//if no need of return value use void else use data type insated of void.

int main (){
    //to avoid repeating the code, declare function above main
    char name[20];

    printf("Enter you name :");
    scanf("%s",&name);

    printString(name);//function arguments,//calling function
    return 0;
}
////////////return string example============================
#include <stdio.h>

//simple code to
//function arguments use there data types
// Argument	Parameter
// Arguments are used while calling the function	
// Parameters are used during the declaration of the function
// Argument is the actual value of this variable that gets passed to function.	
// Parameter is variable in the declaration of the function.
char* printString(char NameString[]){ //char string function paramter
    int i=0;
    while (NameString[i]!='\0'){// \0 represents the end of string
        printf("\t %c",NameString[i]);
        i++;
    }
    return  NameString;
}//if no need of return value use void else use data type insated of void.

int main (){
    //to avoid repeating the code, declare function above main
    char name[20];

    printf("Enter you name :");
    scanf("%s",&name);

    char *returnValue=printString(name);//function arguments,//calling function
    printf("\nName : %s",returnValue);
    return 0;
}