#include <stdio.h>

int main (){
    /*
    + addition
    - sub
    / division
    * multiply
    % modulus
    ++ increment
    --decrement
    */
   int x =3;
   int y =5;

   float z = x*(float)y; // convert y to float
   printf("%f",z);

   z = 4 / 2; // convert y to float
   printf("\n%f",z);

    z = 4 % 2; // 0 if full divide no remainder
   printf("\n%f",z);

}