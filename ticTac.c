#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
//First try dry run, then use debug
//NOTE: never ignore DEBUGGING, Use it everytime to make yourself comfortable with it.

//global variables//not recommended using global
char board[3][3];

void printBox();//function prototyping
void resetBoard();
void help();
int player2Box(int location,char playerChar, char winner);
char *selectPlayer(char *player);
int player1Box(int location,char playerChar, char winner);
char checkWinner();
void winnerLabel(char winner);
int matchDraw(char winner);//board

int main(){
  //system("cls");//windows
  char player[2];//player 1= player[0], player 2 = player[1]
  char *players;
  char winner=' '; //single quotes.

  //Returning array by passing an array which is to be returned as a parameter to the function,
  //pointer can deal with pointers.!
  //we are referening player array only.function will edit it, from function and return the pointer
  int location1=0;//default, index
  int location2=0;

  help();
  resetBoard();
  players=selectPlayer(player);

  while (winner==' '){//while(winner==' ')
    winner=checkWinner(winner);
    if (winner!=' '){
      break;
    }
    printf("location to put %c:",players[1]);
    scanf("%i",&location2);

    location2=player2Box(location2,players[1],winner);
    if(location2 == -1){//if index of player is filled restart/continue loop
      continue;
    }
    location1=player1Box(location2,players[0],winner);
    printf("1=%d  2=%d",location1,location2);
    if (matchDraw(winner)){
      printf("\nMatch Draw !");
      break;
    }
    printBox();
  }
  winnerLabel(winner);

  return 0;
}

void printBox(){
  system("cls");//windows
  printf("\n\t %c | %c | %c \n",board[0][0],board[0][1],board[0][2]);
  printf("\t___|___|___ \n");
  printf("\t %c | %c | %c \n",board[1][0],board[1][1],board[1][2]);
  printf("\t___|___|___ \n");
  printf("\t %c | %c | %c \n",board[2][0],board[2][1],board[2][2]);
}

void help(){
  printf("Value to input :  locations \n");
  printf("\t 1 | 2 | 3 \n");
  printf("\t___|___|___ \n");
  printf("\t 4 | 5 | 6 \n");
  printf("\t___|___|___ \n");
  printf("\t 7 | 8 | 9 \n");

}

void resetBoard(){
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      board[i][j]=' ';
    }
  }
}

int player2Box(int location, char playerChar,char winner){
  location-=1;
  winner=checkWinner(winner);

  //printf("%d",location);
  if(0<=location && location<9 && winner==' '){
    if (location<3 && board[0][location]==' '){//0,1,2
      board[0][location]=playerChar;
      //printBox();
      return location;

    }
    else if (location>=3 && location < 6 && board[1][location-3]==' '){//3,4,5
      board[1][location-3]=playerChar;//[1][3-3], [1][4-3], [1][5-3], :p
      //printBox();
      return location;

    }
    else {//6,7,8
      if (location>=6 && location < 9 && board[2][location-6]==' '){
        board[2][location-6]=playerChar;
        //printBox();
        return location;
      }
    }
    return -1;//check in main loop, if location is already filled.
  
  }
}

char *selectPlayer(char *player){
  do{
    printf("\nSelect x or o : ");
    scanf("%c",&player[1]);
    scanf("%c");//input buffer clear
    player[1]=tolower(player[1]);

    if (player[1] == 'x'){
      player[0]='o';
      return player;
    }
    else if (player[1] == 'o'){
      player[0]='x';
      return player;
    }
  }while (isalpha(player[1]));
}
int player1Box(int location,char playerChar,char winner){
  int player2Loc=location;//for differentiating
  int player1Loc;
  winner=checkWinner(winner);
  //player1Loc = location where to put x or o for player 1 (1 to 9)
  while(1){
    srand(time(0));//seed is must else it will generate same values
    //int random = rand(); //rand() 36767
    //int player1Loc = (rand() % (122-97)+1 )+97 ; //between 97 and 122
    player1Loc = (rand() % 9)+1;//0-8
    if (player1Loc!=player2Loc && 1<=player1Loc && player1Loc <=9 && winner==' '){
      player1Loc=player2Box(player1Loc,playerChar,winner);
      if(player1Loc==-1){//if location is not empty
        continue;//continue loop
      }
      return player1Loc;
    }
    if (winner!=' '){
      winnerLabel(winner);
      return player1Loc;
    }
  }
}

char checkWinner(){
  for (int i=0 ;i<3;i++){
    //check 'x'
    if (board[i][0]=='x' && board[i][1]=='x' && board[i][2]=='x'){ //rows check
      //printf("%d x= [1] ",i);
      return 'x';
    }
    if (board[0][i]=='x' && board[1][i]=='x' && board[2][i]=='x'){// 1 4 7 check
      //printf("%d x= [2] ",i);
      return 'x';
    }
    if (i==0){
      if (board[i][i]=='x' && board[i+1][i+1]=='x' && board[i+2][i+2]=='x'){// 1 4 7 check
        //printf("x = 00 11 22 %d",i);
        return 'x';
      }
      if (board[i+2][i]=='x' && board[i+1][i+1]=='x' && board[i][i+2]=='x'){// 1 4 7 check
        //printf("x= 20 11 02 %d",i);
        return 'x';
      }
    }
    if (board[i][0]=='o' && board[i][1]=='o' && board[i][2]=='o'){ //rows check
      //printf("%d o = [1] ",i);
      return 'o';
    }
    if (board[0][i]=='o' && board[1][i]=='o' && board[2][i]=='o'){// 1 4 7 check
      //printf("%d o = [2] ",i);
      return 'o';
    }
    if (i==0){
      if (board[i][i]=='o' && board[i+1][i+1]=='o' && board[i+2][i+2]=='o'){// 1 4 7 check
        //printf("O= 00 11 22 %d",i);
        return 'o';
      }
      if (board[i+2][i]=='o' && board[i+1][i+1]=='o' && board[i][i+2]=='o'){// 1 4 7 check
        //printf("O= 00 11 22 %d",i);
        return 'o';
      }
    }
    if (i==2){//if no one is winner(check at last loop)
      return ' ';
    }
}
  //1 2 3
  //1 5 9
  //1 4 7}
}
void winnerLabel (char winner){
  printBox();
  printf("\n\tWinner is %c ! ",winner);
}
int matchDraw(char winner){
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      if (board[i][j]==' ' || winner!=' '){
        return 0;
      }
    }
  }
  return 1;
}