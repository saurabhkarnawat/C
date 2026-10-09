// Swap two numbers without temp variable
#include <stdio.h>

int main()
{
    int a=10,b=20;

    printf("Before Swapping: a=%d,b=%d\n",a,b);

    a= a ^b;
    b= a ^b;
    a= a ^b;

    printf("After Swapping: a=%d,b=%d",a,b);

    return 0;   

}