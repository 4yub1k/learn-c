#include <stdio.h>

int main () {
  FILE *data = fopen("names.txt","r");//"w" overwrite data every time
  char buffer[225]; //buffer or input size

  //File exists or not
  if (data==NULL){
    printf("File doesnt exist !");
  }

  while (fgets(buffer, 255, data) != NULL){// return file data till it reaches end(NULL)
                                            //fgetc(buffer))!=EOF
    printf("%s",buffer);//print the buffer
  }
  

  fclose(data);//always close you file after editing
  

  return 0;
}