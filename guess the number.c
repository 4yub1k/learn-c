#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //time's parameter is an alternate return path. If you pass in NULL (or 0) it is ignored. 
    //Otherwise, you must pass the address of a time_t object which will be filled with the time.
    const int MAX=100;
    const int MIN=1;
    
    int guess;
    int tries;
    int correct;

    srand(time(0));//seed is must else it will generate same values

    //int random = rand(); //rand() 36767
    correct = (rand() % MAX) + MIN ; //between 1 and 6

    while (1) {//you can use do-while too
        printf("\nEnter the number between 1-100: ");
        scanf("%d",&guess);

        if (guess > correct){
            printf("Try again , too High");
        }
        else if (guess < correct){
            printf("Try again , too low");
        }
        else{
            printf("\nHurray ! You guessed %d in %d tries",correct, tries);
            break;
        }
        tries++;
    }
    return 0;
}