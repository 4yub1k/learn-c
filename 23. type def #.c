#include <stdio.h>
#include <string.h>
//typedef (reserved keword) Give name to the existing datatype
//typedef datatype name[]/name
typedef char fullName[20];
typedef struct{
    char name[20];
    int id;
    int role;//1=admin,2=visitor
} User;

int main (){

    //no need to use struct keyword    
    User admin ={"ayubik",123,1};//can input vale like this too(declaration)
    User visitor;

    printf("\nName: %s Id: %d Role: %d\n",admin.name,admin.id,admin.role);

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

    //You can you this 20 bytes array of char with any variable
    fullName name="Salah";//fulName = char fullName[20], its shortname is fullName
    fullName user="Tester"; 
    printf("\n typedef name: %s and user: %s",name,user);

    return 0;
}