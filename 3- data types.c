use data type according to the size
https://en.wikipedia.org/wiki/C_data_types
https://www.programiz.com/c-programming/c-data-types
use const to fix the value, will not be changed during program excution
size=(2^bits-1)-1
value beyond this max range it will throw overflow error
and reset to minum vaalue the data type can hold
BY default int = long int, we dont need long exxpliccitly
1 byte 2^8 = 256 (decimals)
// long int == int.
//sizeof(varible) remember this function.
Type	        Storage size	Value range
char	        1 byte	        -128 to 127 or 0 to 255
unsigned char	1 byte	        0 to 255
signed char	    1 byte	        -128 to 127
int	            2 or 4 bytes	-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
unsigned int	2 or 4 bytes	0 to 65,535 or 0 to 4,294,967,295
short	        2 bytes	        -32,768 to 32,767
unsigned short	2 bytes	        0 to 65,535
long	        8 bytes or (4bytes for 32 bit OS)	-9223372036854775808 to 9223372036854775807
unsigned long	8 bytes	        0 to 18446744073709551615
bool 1 byte

if yyou use short not need to use int

Type	        Size (bytes)	Format Specifier
char	        1	%c
int	at least 2, usually 4	%d, %i
float	        4	%f
double	        8	%lf
short int	    2 usually	%hd
unsigned int	at least 2, usually 4	%u
long int	    at least 4, usually 8	%ld, %li
long long int	at least 8	%lld, %lli
unsigned long int	at least 4	%lu
unsigned long long int	at least 8	%llu
signed char	    1	%c
unsigned char	1	%c
long double	at least 10, usually 12 or 16	%Lf

#include <stdio.h>

int main (){
    short int a = 32767; //cant store mire then 2 bytes ,short
    int b = 32769; //long int max 4 byte.
    printf("%hi",a);
    printf("size of a %d",sizeof(a));
    printf("\n%d",b);
    return 0;
}
// 32767
// 32769