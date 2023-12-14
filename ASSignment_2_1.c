#include<stdio.h>

int main()
{
    unsigned char x = 1;
    unsigned char y = x << 6;

    x = x | y ;  // TO SET THE BIT number 7
    printf("%d\n",x);
    x = x ^ y ;  // to Clear bit number 7 Or to toggle 7`s bit
    printf("%d\n",x);
    int z = x & y ; // Read the 7's bit from number
    printf("%d\n",z!=0);
}

