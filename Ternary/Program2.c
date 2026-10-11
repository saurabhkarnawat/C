// Greatest of three

#include<stdio.h>

int main()
{
    int num1=10;
    int num2=20;
    int num3=30;

    int Greatest;

    Greatest= num1 > num2 ? ((num1 > num3) ? num1 : num3) : ((num2 > num3)? num2 : num3) ;
    
    printf("Greatest is %d",Greatest);
    return 0;
}
