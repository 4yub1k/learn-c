#include <stdio.h>
#include <string.h>

int main(){
    char string1[]="Ayubi";
    char string2[]="ANoob";
    //un comment 1 by 1 to see output
    //printf("String uppercase : %s",strupr(string1));
    //printf("\nString lowercase : %s",strlwr(string1));
    //printf("\nString catenation : %s",strcat(string1,string2));//add string2 to string1
    //printf("\nString n catenation : %s",strncat(string1,string2,2));//append n character from string1 to string2
    //printf("\nString Copy : %s ",strcpy(string1,string2));//copy string1 to string2
    //printf("\nString Copied : %s %s",string1,string2);//copy string1 to string2
    
    //printf("\nString n Copy : %s ",strncpy(string1,string2,2));//copy firt 2 letter to string1 string1 to string2
    //printf("\nString Copied : %s %s",string1,string2);//copy string1 to string2

    //printf("String replace : %s",strset(string1,'/'));
    //printf("String replace upto n: %s",strnset(string1,'/',2));
    //printf("Reverse String : %s",strrev(string1));//string reverse

    //printf("string length int %d:", strlen(string1));//string length
    //printf("String compare :%d",strcmp(string1,string2));// if same return 0 else not 0
    //printf("String n compare :%d",strncmp(string1,string2,1));// compare n letter 1 for first, return 0 else 1
    //strcmpl(strin1,string2);//ignore case
    //strncmpl(strin1,string2,1);//ignore case


    //Outputs
    // String uppercase : AYUBI
    // String lowercase : ayubi
    // String catenation : ayubiNoob
    // String n catenation : ayubiNoobNo
    // String Copy : Noob
    // String Copied : Noob Noob
    // String n Copy : Noubi
    // String Copied : Noubi Noob
    //String replace : /////
    //String replace at n: //ubi
    //Reverse String : ibuyA

    //string length int 5:
    //String compare :-1



    return 0;
}