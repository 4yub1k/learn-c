#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //time's parameter is an alternate return path. If you pass in NULL (or 0) it is ignored. 
    //Otherwise, you must pass the address of a time_t object which will be filled with the time.
    
    srand(time(0));//seed is must else it will generate same values

    //int random = rand(); //rand() 36767
    int random = (rand() % 6) +1 ; //between 1 and 6
    int random2 = (rand() % 6) +1 ; //between 1 and 6
    int random3 = (rand() % 6) +1 ; //between 1 and 6
    int random4 = (rand() % 6) +1 ; //between 1 and 6


    printf("%d",random);
    printf("%d",random2);
    printf("%d",random3);
    printf("%d",random4);

    printf("\n%d",time(0));
    return 0;
}