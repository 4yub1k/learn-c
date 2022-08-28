#include <stdio.h>

int main () {
  //create pointer using FILE keyword
  // FILE *data = fopen(filename, mode)
  ///if file is somewhere use its location "E:\\Pro\\c\\names.txt"
  /*
  "r" Opens a file for reading. The file must exist.
  "w" Creates an empty file for writing. If a file with the same name already exists, its content is erased and the file is considered as a new empty file.
  "a" Appends to a file. Writing operations, append data at the end of the file. The file is created if it does not exist.
  "r+" Opens a file to update both reading and writing. The file must exist.
  "w+" Creates an empty file for both reading and writing.
  "a+" Opens a file for reading and appending.
  */
  FILE *data = fopen("names.txt","a");//"w" overwrite data every time
  fprintf(data, "This is Lizard\n");


  fclose(data);//always close you file after editing
  
  //To remove the file, or you want to check if file is there or, create new one etc
  //pointer will also return NULL if the file doesnt exist.
  // if (!remove("names.txt")){// if deletes the file return 0, !0 = true.
  //   printf("Removed successfully !");
  // }
  // else {
  //   printf("Fail to remove!");
  // }

  return 0;
}