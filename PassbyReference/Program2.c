//Doublearray using pass by Reference

#include<stdio.h>

void doublearray(int *arr,int size){

    int i;

    for(i=0;i<size;i++)
    {
        arr[i]= arr[i]*2;
    }
}





int main()
{
    int arr[5]={1,2,3,4,5};

    doublearray(arr,5);

    int i;

    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}