#include <stdio.h>

//Print rectagle
int main () {
    int cols;
    int rows;
    char symbol;
    
    printf("enter cols :");
    scanf("%d",&cols);

    printf("enter rows :");
    scanf("%d",&rows);
    
    //now scanf will read \n as input to clear buffer, scanf("%d")
    scanf("%c");

    printf("enter symbol :");
    scanf("%c",&symbol);
    
    for (rows;rows>0;rows--){
        for (int i=cols;i>0;i--){
            printf("%c",symbol);
        }
        printf("\n");
    }

    return 0;
}