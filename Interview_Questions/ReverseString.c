//Reverse of a string using String Functions

#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="Saurabh";
    int start=0;
    int end=strlen(str)-1;

    while(start<end)
        {
            char temp = str[start];
            str[start]=str[end];
            str[end]=temp;
            start++;
            end--;
        }
    printf("Reverse of string : %s",str);
}
