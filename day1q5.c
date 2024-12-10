#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num%3==0&&num%5==0)
    {
        printf("%d is a multiple of 3 and 5",num);
    }
    else
    {
        printf("%d is not multiple of 3 and 5",num);
    }
    return 0;
} 