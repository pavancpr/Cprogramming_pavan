
# include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping:");
    printf("\na=%d",a);
    printf("\nb=%d",b);
return 0;
}
