//pointers holds/reference address of variables
//*p is derefrence, get the value
//pointer should be of same datatype, or do type casting or use general pointers
// * is indirection operator
#include <stdio.h>

int main (){
  //POINTER CONTAINS ADDRESS OF VARIABLE IT IS POINTING TO.
  //POINTER HAS ITS OWN ADDRESS WHERE IT SAVES ADDRESS OF VARIABLE
  int a = 99;
  int *b = NULL ; //int* b, both same, star increses with pointer. ** for pointer pointing to pointer,
          //*** if pointer A pointing to pointer B and pointer B is pointing to C.  :)
  //Best practice, assign NULL to pointer, if not referening to anything,
  //int *b = NULL or int *b = &a
  
  printf("\tAddress Hex of a : %x",&a);
  printf("\n\tValue of a : %d\n",a);

  b=&a;//b is pointing/reference to a, address, use *b (dereference) to acces to value at that memory location.
  printf("\n\tPointer b value: %x",b);
  printf("\n\tPointer b Address: %x",&b);
  printf("\n\tAddress a: %x",&a);
  printf("\n\tValue at that address : %d",*b);
  printf("\n\tValue of a : %d\n",a);

  
  //change value
  *b=100;
  printf("\n\tPointer b value: %x",b);
  printf("\n\tPointer b Address: %x",&b);
  printf("\n\tAddress a: %x",&a);
  printf("\n\tValue at that address: %d",*b);
  printf("\n\tValue of a : %d\n",a);

  int **c=&b;
  printf("\n\tPointer c value: %x",c);
  printf("\n\tPointer c Address: %x",&c);
  printf("\n\tAddress b: %x",&b);
  printf("\n\tValue at that address : %d",*(*c)); //*(*c) same to **c
  printf("\n\tValue of a : %d\n",a);

  double ***d=(double***)&c; //we can see * is increasing per pointer
  //d=(double***)&c; //* according to pointer you are typecating to
  printf("\n\tPointer d value : %x",d);
  printf("\n\tPointer d Address: %x",&d);
  printf("\n\tAddress c: %x",&c);
  printf("\n\tValue at that address : %ld",**(*d)); //*(*c) same to **c
  printf("\n\tValue of a : %d\n",a);

  //a address saved in b, b address saved in c, c address saved in d.

  printf("Addresses of \n\ta: %x \n\tb: %x \n\tc: %x\n\td: %x",&a,&b,&c,&d);
  printf("\nValues of \n\ta: %d \n\tb: %x \n\tc: %x\n\td: %x",a,b,c,d);
  return 0;
}