#include <stdio.h>
#include <string.h>
//In C programming, a struct (or structure) is a collection of variables 
    //(can be of different types) under a single name.
struct User{
    char name[20];
    int id;
    int role;//1=admin,2=visitor
};

int main (){

    struct User admin;
    struct User visitor;
    
    strcpy(admin.name,"Salah");
    admin.id=1234;
    admin.role=1;

    strcpy(visitor.name,"NewTester");
    visitor.id=1234;
    visitor.role=0;


    printf("%s\n",admin);
    printf("%d\n",admin.id);
    printf("%d",admin.role);

    printf("\nName: %s Id: %d Role: %d",visitor.name,visitor.id,visitor.role);



    return 0;
}