#include <stdio.h>
#include <time.h>
//enums(user defined integer identifier) to make the code more readable
//the looks like string, but treat them like "INTEGERS"
//enum year{jan,feb,march,apr,may,june,july} //jan=0 .....july=6
enum month{jan=1,feb=2,march=3,apr=4,may=5,june=6,july=7};

int main (){
    time_t result = time(NULL);//see wikipedia for more
    //enum name variablename = value
    enum month presentMonth = feb;

    if (presentMonth==jan){//1==1 comparision
        printf("Happy Birthday ");
    }
    else
        printf("Your birthday is in January ! \nToday %s",asctime(gmtime(&result)));
    return 0;
}