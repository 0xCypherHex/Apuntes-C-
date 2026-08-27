#include <stdio.h>

int main()
{
    tbuf(stdout, NULL);

    unsigned int i = 0XC1F30000;                       // 1 10000011 11110011000000000000000
    unsigned char sign = i >> 31;                      // sign = 1
    unsigned char exponent = (i >> 23) & 0b0111111;    // exponent = 131
    unsigned int mantissa = i & 0x7FFFFF;              // mantissa = 0x7F30000
    printf("%d,%d, %X\n", sign,exponent,mantissa);





    return 0;
}
