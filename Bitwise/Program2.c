//Check whether a num is Even or Odd

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a num:");
    scanf("%d",&num);

    if((num & 1)==0)
    {
        printf("Num is Even\n");
    }
    else
    {
        printf("Num is odd");
    }

    return 0;
}