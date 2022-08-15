//can save only same data types.
#include <stdio.h>
#include <string.h>
#include <time.h>

int main (){
    //sizeof(variable) remember this IMP
    char name[]="abcd";
    double rates[]={2.1,33.3,45.4,99.11};
    //char name1[];//you cant do this
    
    //fix size cant be changed later.
    //char name[4]="abcd";
    //char name[4];
    //double rates[4]={2.1,33.3,45.4,99.11};
    printf("string %s", name);
    printf("\nstring index 0=%c 1=%c", name[0],name[1]);

    for (int i=0;name[i]!='\0';i++){//for string as last item is null=\0
        printf("\nindex %d value : %c", i, name[i]);
    }
    //using string.h library
    printf("\nPrint using string length fucntion");
    for (int i=0;i<=strlen(name)-1;i++){//length -1 because in string/array last element is \0
        printf("\nindex %d value : %c", i, name[i]);
    }
    printf("\nPrint using while loop");
    int i=0;
    while (name[i]!='\0'){
        printf("\nindex %d value : %c", i, name[i]);
        i++;
    }
    
    printf("\nPrint using do-while loop");
    int j=0;
    do{
        printf("\nindex %d value : %c", i, name[j]);
        j++;
    }while (name[j]!='\0');

    printf("\nPrint using using sizeof as check");
    printf("\nsize of name : %d bytes",sizeof(name));
    printf("\nsize of name[0] : %d bytes",sizeof(name[0]));
    for (int i=0;i<sizeof(name)/sizeof(name[0])-1;i++){//for string as last item is null=\0
        printf("\nindex %d value : %c", i, name[i]);
    }

    printf("\nPrint using using sizeof as check, for numbers");
    printf("\nsize of rates : %d bytes",sizeof(rates));
    printf("\nsize of rates[0] : %d bytes",sizeof(rates[0]));// 1 double is of 8 bytes, change accroding to datatype
    for (int i=0;i<sizeof(rates)/sizeof(rates[0]);i++){//for string as last item is null=\0
        printf("\nindex %d value : %0.2lf", i, rates[i]);
    }
    return 0;
}