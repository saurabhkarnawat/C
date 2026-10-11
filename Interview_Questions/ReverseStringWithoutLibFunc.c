#include<stdio.h>
int mystrlen(char *str);
int main()
{
    char str[8]="Saurabh";

    int start=0;

    int end= mystrlen(str) -1;

    while(start< end)
        {
            char temp;
            temp=str[start];
            str[start]=str[end];
            str[end]=temp;
            start++;
            end--;
        }
    printf("Reverse String :%s",str);
    return 0;
}
    int mystrlen(char *str)
    {
        int i=0;
        int count=0;
        while(str[i] != '\0')
            {
                count++;
                i++;
            }
        return count;
    }

