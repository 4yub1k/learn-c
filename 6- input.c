#include <stdio.h>
//"" use
// To run code runner as ouput , uncheck the setting>codee-runner>run in terminal
int main (){
    int number;
    char name[20];
    printf("What is your name : ");
    //scanf("%s",&name); //& for address of operator
    fgets(name,20,stdin); //if there is white spaces we need, fgets(name, <array size>,stdin)
    //stdin is standard input
    printf("What is your age : ");
    scanf("%d",&number); //& for address of operator
    
    printf("Hi! %s how are you, you are %d years old.",name,number);
    return 0;
}