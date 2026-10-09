//All Basic Bitwise Operations 


#include<stdio.h>

int main()
{
    int a=5,b=3;

    printf("And =%d\n",a & b);
    printf("OR =%d\n", a | b);
    printf("XOR =%d\n",a ^ b);
    printf("Compliment of a=%d\n",~a);
    printf("Left Shift =%d\n",a << 1 );
    printf("Right shift =%d\n",a >> 1);

    return 0;
}