#include <stdio.h>
#include <string.h>
// Break will exit the loop
// continue will skip the remaining code and jump to next iteration
int main (){
    char inputValue[8];
    char check2[]="break";//[] leave empty for values 
    char check1[]="continue";

    printf("Enter Break or continue : ");
    scanf("%s",&inputValue);
    
    strlwr(inputValue);

//    printf("%d",strcmp(inputValue,check1));


    for (int i;i<=10;i++){
//        printf("%d cmp",strcmp(inputValue,check1));
        printf("\nLine before continue ");
        if (!strncmp(inputValue,check1,8)){ //if true return 0, if (!0)
            printf("\n\tThis is %s",inputValue);
            printf("\n\tSkipping the remaining code, continue loop");
            continue;
        }
        else if (!strncmp(inputValue,check2,5)){
            printf("\n\tThis is %s",inputValue);
            printf("\n\tExiting the loop here");
            break;
        }
        printf("\nLine after continue ");
    }

    return 0;
}