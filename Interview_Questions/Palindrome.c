// Write a Program to check whether a number is a Palindrome or not
#include <stdio.h>

int main() {
    //Take a number from user
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    int sum=0;
    int rem=0;
    int q=num;
    //Logic to get reverse of Number
    while(q != 0)
        {
            rem=q % 10;
            sum=(sum*10) + rem;
            q=q/10;
        }
    //Print Sum
    printf("Sum is: %d\n",sum);
    if(sum == num)
    {
        printf("Number is Palindrome");
    }
    else
        printf("Number is not Palindrome");
    
    return 0;
}
