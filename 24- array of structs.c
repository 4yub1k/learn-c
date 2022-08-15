#include <stdio.h>
#include <string.h>
//typedef (reserved keword) Give name to the existing datatype
//typedef datatype name[]/name
typedef struct{
    char name[20];
    int id;
    int role;//1=admin,2=visitor
} User;

int main (){

    //no need to use struct keyword   
    //user= struct 
    User admin1 ={"ayubik",123,1};
    User admin2 ={"tester",123,1};
    User admin3 ={"DevOp",123,1};
    User admin4 ={"noob",123,1};

    User admins[4]={admin1,admin2,admin3,admin4};

    for (int i=0;i<sizeof(admins)/sizeof(admins[0]);i++){
        printf("\nName : %s",admins[i].name);//%12s leftside spaces, %-12s righttside spaces 
        printf("\nId : %d",admins[i].id);
        printf("\nRole : %d",admins[i].role);
    }

    return 0;
}