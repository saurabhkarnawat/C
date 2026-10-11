// Ternary Operator : Greatest of two 

#include<stdio.h>

int main()
{
    int num1=10;
    int num2=20;

    int Greatest;

    Greatest= num1 > num2 ? num1 : num2;

    printf("Greatest of two: %d",Greatest);

    return 0;
}