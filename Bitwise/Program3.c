//Set a bit , Clear a bit , Toggle a bit 


#include<stdio.h>

int main()
{
    int num=10;
    int pos=2;

    printf("SETBIT = %d\n",(num | (1 << 2)));
    printf("CLEARBIT = %d\n",(num & ~(1 << 2)));
    printf("ToggleBit = %d\n",(num ^ (1 << 2)));

    return 0;
}