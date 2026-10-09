// To chck whether a num is power of 2

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a num:");
    scanf("%d",&num);

    if(num!=0 && ((num & (num-1))==0))
    {
        printf("Num is Power of two");
    }
    else 
    printf("Num is not power of two");

    return 0;
}