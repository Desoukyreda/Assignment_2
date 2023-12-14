#include<stdio.h>
#define CHAR_BITS 8
int main()
{
    unsigned char x =128 ;
    int d =3 ;

    x = x << d | x >> CHAR_BITS - d ; // TO rotate left by 3
    printf("%d\n",x);

    x = 128;
    x = x >> d | x << CHAR_BITS - d ; // TO rotate right by 3
        printf("%d",x);

}

