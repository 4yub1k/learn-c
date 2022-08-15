#include <stdio.h>

//* pointer gives us the address of the variable
void decToBin(int number){
  char z[16];//int max 4 byte(1 byte - 4bits(0000)), 4 bytes = 4*4 =16 bits
  
  printf("%4d : ", number);

  for (int i=1;i<=(sizeof(number)*4);i++){
    z[i]=number%2; //50%2 =0
    number/=2;//100/2 = 50
  }
  //printf("\n %d\n",(sizeof(a)*4)-1);//-1 because loop starts from 0, 0->16=17 we need to iterate upto 16
  //if you start loop from 1 then no need to -1
  
  //int* decToBin(int number, int z[])
  // static int z[16]
  for (int i=(sizeof(number)*4);i>=1;i--){
    if(i%4==0){
      printf(" ");
    }
    printf("%d",z[i]);
  }
  printf("\n");
  //return z;//not you cant point to local variable in main, declare it in main to avoid errors
          //declare it as static variable static z[16] inside function
}
void printBin(int num1, int num2,int output){
  decToBin(num1);
  decToBin(num2);
  printf("===========================\n");
  decToBin(output);
  printf("\n");
}

int main (){

  int a=300;
  int b=200;
  int z;
  //refer to 10. operators
  // &	Binary AND Operator copies a bit to the result if it exists in both operands.	(A & B) = 12, i.e., 0000 1100
  // |	Binary OR Operator copies a bit if it exists in either operand.	(A | B) = 61, i.e., 0011 1101
  // ^	Binary XOR Operator copies the bit if it is set in one operand but not both.	(A ^ B) = 49, i.e., 0011 0001
  // ~	Binary One's Complement Operator is unary and has the effect of 'flipping' bits.	(~A ) = ~(60), i.e,. -0111101
  // <<	Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.	A << 2 = 240 i.e., 1111 0000
  // >>	Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.	A >> 2 = 15 i.e., 0000 1111 '

  printf("\na & b (AND)\n");
  z= a & b;
  printBin(a,b,z);

  printf("\na | b (OR)\n");
  z= a | b;
  printBin(a,b,z);

  printf("\na ^ b (XOR)\n");
  z= a ^ b;//(A' + B') (A + B), inshort for 1^1=0, 1^0=0, 0^1=0
  printBin(a,b,z);

  printf("\na << 1 (BItwise shift left)\n");
  z= a << 1; //shift to left by 1, 0000 0001 0010 1100 << 1 ==> 0000 0010 0101 1000
  decToBin(a);
  decToBin(z);

  printf("\na >> 2 (Bitwise shift right)\n");
  z= a >> 2; //shift to left by 1, 0000 0001 0010 1100 >> 2 ==> 0000 0000 0100 1011
  decToBin(a);
  decToBin(z);

  return 0;
}