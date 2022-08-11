#include <stdio.h>
#include <string.h>

int main (){
    char name[20];

    printf("Enter the name :");
    fgets(name, 20, stdin);
    name[strlen(name)-1]='\0';//new line input to null

    while (name[0]=='\0'){//if empty repeat, while (name[0]=='\0') or while (strlen(name)==0)
        printf("Enter the name :");
        fgets(name, 20, stdin);
        name[strlen(name)-1]='\0';//new line input to null
    }
    return 0;
}
//meth0d 2
/*
int main (){
    char name[20];

    printf("Enter the name :");
    fgets(name, 20, stdin);

    while (name[0]=='\0' || name[0]=='\n'){//if empty repeat, while (name[0]=='\0') or while (strlen(name)==0)
        printf("Enter the name :");
        fgets(name, 20, stdin);
    }
    return 0;
}
*/