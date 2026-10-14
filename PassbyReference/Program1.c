//Pass By Reference

#include<stdio.h>

void calsum(int x,int y,int *sum)
;
int main()
{
    int x=10,y=20;

    int sum;

    calsum(x,y,&sum);

    printf("Sum =%d",sum);

    return 0;
}

void calsum(int x, int y, int *sum)
{
    *sum =x+y;
}