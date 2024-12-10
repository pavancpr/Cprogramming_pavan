#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d",&a);
    b=sqrt(a);
    c=b*b;
    if(c==a)
    printf("%d is a perfect square",a);
    else
    printf("%d is not perfect square",a);
    return 0;
}