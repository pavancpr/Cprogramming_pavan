#include<stdio.h>
int calculator(char a,int b,int c)
{
   if(a=='+')
   {
    printf("%d+%d=%d",b,c,b+c);
   }
   else if(a=='-')
   {
    printf("%d-%d=%d",b,c,b-c);
   }
   else if(a=='*')
   {
    printf("%d*%d=%d",b,c,b*c);
   }
   else if(a=='/')
   {
    printf("%d/%d=%d",b,c,b/c);
   }
   else 
   {
    printf("please enter a valid input");
   }
   return 0;
}
int main()
{
    char a;
    int b,c;
    printf("enter the operation(+,-,*,/):");
    scanf("%c",&a);
    printf("enter two operands:");
    scanf("%d%d",&b,&c);
    calculator(a,b,c);
    return 0;
}