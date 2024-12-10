#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>=1&&num<=12)
    {
        printf("%d is a valid month number",num);
    }
    else
    {
        printf("%d is not valid month number",num);
    }
    return 0;
} 