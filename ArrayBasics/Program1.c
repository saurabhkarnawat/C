//Find Largest of all Array elements

#include<stdio.h>

int main()
{
    int arr[5];

    int i;
  
    printf("Enter Array Elements:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array elements are:\n");
    int j;
    for(j=0;j<5;j++)
    {
        printf("%d ",arr[j]);
    }

    int largest = arr[0];
    int k;
    for(k=1;k<5;k++)
    {
        if(largest < arr[k])
        {
            largest = arr[k];
        }
    }

    printf("\nLargest =%d",largest);

    return 0;   
}