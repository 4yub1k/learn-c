#include <stdio.h>

int main(){

  int a = 'A';
  int b = 'A';
  double c= 20.22;

  char d[4];

  //decimal :only contains 0 t0 9
  //Hex : contain a-f,0-9 //mix of them
  printf("char %d bytes\n",sizeof(a));
  printf("int %d bytes\n",sizeof(b));
  printf("double %d bytes\n",sizeof(c));
  printf("Array char %d bytes\n",sizeof(d));
  //%p	an address (or pointer), see 4- format specifiers
  //%x	a hexadecimal (base 16) integer

  //change data types to understand more
  printf("\nDecimal representaion of memory\n");
  printf("We can see the last digit in address is decreasing by 4,4,8 and 4\n");
  printf("Memory is alotting memory blocks (bytes)\n");
  printf("a %d Address (%d bytes)\n",&a,sizeof(a));//& gets the address
  printf("b %d Address (%d bytes)\n",&b,sizeof(b));
  printf("c %d Address (%d bytes)\n",&c,sizeof(c));//convert this decimal to hex to see difference.
  printf("d %d Address (%d bytes)\n",&d,sizeof(d));
  
  printf("\nHex representaion of memory\n");
  // one hex digit = 4 bits
  printf("We can see the last digit is decreasing by 4,4,8 and 4\n");
  printf("Memory is alotting memory blocks (bytes)\n");

  printf("a %x Address\n",&a);//& gets the address
  printf("b %x Address\n",&b);
  printf("c %p Address\n",&c);
  printf("d %p Address\n",&d);

  return 0;
}