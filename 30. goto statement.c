#include <stdio.h>
//jump to label, this very 
/* SYNTAX
goto label;

label:
*/
int main() {
  int i, j;
  for (i = 1; i < 5; i++) {
    if (i == 2)
      goto there;
    printf("%d\n", i);
  }
  there:
    printf("Two");
  return 0;
}