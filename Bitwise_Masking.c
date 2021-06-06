#include<stdio.h>
#include<stdlib.h>
void main()
{
    int number=0xbbbf76dd;              //= 10111011101111110111011011011101 = 3149887197

    int a,b,c;
    int p,q,r;

    a=number & 0xf ;
    printf("\n(0-4) = %x \n",a);

    b=number & 0xfffff;
    printf("\n(4-20) = %x \n",b);

    c=number & 0xfff00000;
    printf("\n(20-32) = %x \n",c);

    p=(number & 0xf );
    printf("\n\nZero to Four in bits = %x\n",p);

    q=(number & 0xfffff)>>4;
    printf("\nFour to Twenty in bits = %x\n",q);

    r=(number & 0xfff00000)>>20;
    printf("\nTwenty to Thirty-Two in bits = %x\n",r);

}
