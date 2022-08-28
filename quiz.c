#include <stdio.h>
#include <ctype.h>
#include <time.h>       // for time()
//#include <unistd.h>     // for sleep(seconds)
/* For more about time
https://www.techiedelight.com/find-execution-time-c-program/
*/
int main() {
  time_t start = time(NULL);

  //printf("Time Started : %ld",start);
  char questions[][100]={//4 rows
    "1. Brass gets discoloured in air because of the presence of which of the following gases in air?",
    "2. Which of the following is a non metal that remains liquid at room temperature?",
    "3. Chlorophyll is a naturally occurring chelate compound in which central metal is ",
    "4. Which of the following is used in pencils?"
  };

  char options[][100]={//4 rows
    "A. Oxygen","B. Hydrogen sulphide","C. Carbon dioxide","D. Nitrogen",
    "A. Phosphorous","B. Bromine","C. Chlorine","D. Helium",
    "A. copper","B. magnesium","C. iron","D. calcium",
    "A. Graphite","B. Silicon","C. Charcoal","D. Phosphorous"
  };
  char correct[]={'B','B','B','A'};
  int size=sizeof(questions)/sizeof(questions[0]);
  int marks;
  char answer;

  for (int i=0;i<size;i++){
    printf("\n%s",questions[i]);
    for (int j=i*4;j<i*size + 4;j++){
      //printf(" %d",j);
      printf("\n\t%s",options[j]);
    }
    printf("\nAnswer : ");
    scanf("%c",&answer);
    scanf("%c");//clear input buffer
    answer=toupper(answer);//input to upper, a=>A

    if (answer==correct[i]){
      marks+=1;
      printf("Correct !");
    }
    else {
      printf("Wrong !");
    }
  }
  printf("\nRight Answers : %d out of %d",marks,size);
  time_t finish = time(NULL);

  printf("\nTime finish : %d seconds",finish-start);
  return 0;
}