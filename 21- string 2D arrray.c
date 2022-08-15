#include <stdio.h>
#include <string.h>

int main (){

    char countries[][10]={"Pakistan","Usa","Turkey"};
    
    // you can't print it directly ,printf("%s",countries);
    printf("%c",countries[0][0]);
    printf("%c",countries[0][1]);
    printf("\n%s",countries[0]);// accesing string array little be different

    //change value. //you can also do this letter by letter
    strcpy(countries[1],"India");
    printf("\nCopied %s\n",countries[1]);// accesing string array little be different

    for (int i=0; i<sizeof(countries)/sizeof(countries[0]);i++){
        printf("\n%s",countries[i]);// accesing string array little be different
    }
    //change countries[1]
    printf("\n");
    char new[]="USA";

    for (int i=0;countries[1][i]!='\0';i++){ //for (int i=0;i<=sizeof(new);i++)//int i=0;countries[1][i]!='\0';i++
        printf("%c\n",countries[1][i]);
        countries[1][i]=new[i];//replace one by one
    }
    //printf("%s",countries);
    for (int i=0; i<sizeof(countries)/sizeof(countries[0]);i++){
        printf("\n%s",countries[i]);// accesing string array little be different
    }
    return 0;
}