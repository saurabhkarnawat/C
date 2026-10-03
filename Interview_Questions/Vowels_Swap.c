// Replace vowels with 1 

#include <stdio.h>

int main() {
    char arr[8]= "Saurabh";
    int i=0;
    while(arr[i] != '\0')
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        {
               arr[i]='1';
        }
        i++;
    };
    printf("%s",arr);
    return 0;
}