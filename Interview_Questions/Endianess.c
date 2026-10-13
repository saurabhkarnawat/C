// Write a program to check the Endianess 

#include <stdio.h>

int main()
{
    int x =0x12345678;

    char *ptr= (char*)&x;

    if((*ptr)==0x12)
    {
        printf("Big Endian");
    }
    else
        printf("Little Endian");
    return 0;
}