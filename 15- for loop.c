#include <stdio.h>

int main (){

    for (int i=0;i<=10;i++){
        printf("%d ",i);
    }
    printf("\n");
    for (int i=0;i<=10;i+=2){
        printf("%d ",i);
    }
    printf("\n");
    for (int i=10;i>=0;i--){
        printf("%d ",i);
    }
    printf("\n");
    for (int i=10;i>=0;i-=2){
        printf("%d ",i);
    }
    return 0;
}
//loops
// 0 1 2 3 4 5 6 7 8 9 10 
// 0 2 4 6 8 10
// 10 9 8 7 6 5 4 3 2 1 0
// 10 8 6 4 2 0