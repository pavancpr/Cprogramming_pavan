#include<stdio.h>
int main()
{
    int age;
    printf("enter the candidate age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("candidate is eligible to vote");
    }
    else
    {
        printf("candidate is not eligible to vote");
    }
    return 0;
}