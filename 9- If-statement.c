#include <stdio.h>
#include <math.h>
//"" use

int main(){
    char name[20];
    //compare name
    printf("Enter name  :");
    scanf("%s",&name);

    //code to check end of string
    // short int i=0;
    // while (name[i]!='\0'){
    //     printf("\n%c",name[i]);
    //     i++;
    // }
    //you can you as many else if you want
    if (name == "test"){
        printf("\nYou can debug the code");
    }
    else if (name == "admin"){
        printf("\nWelcome admin %s",name);
    }
    else 
        printf("\nYou are not allowed !");

    return 0;
}