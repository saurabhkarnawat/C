// Count no. of Set bits

#include<stdio.h>

int main()
{
    int num;

    printf("Enter a num:");
    scanf("%d",&num);

    int count=0;
    int i;
    for(i=0;i<31;i++)
    {
        if((num & (1<<i)) != 0)
        {
            count++;
        }
    }

    printf("Number of set bits =%d",count);

    return 0;
}