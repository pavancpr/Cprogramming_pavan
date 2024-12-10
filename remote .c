#include<stdio.h>
int remoate(char a)
{
   if(a=='+')
   {
    printf("volume up");
   }
   else if(a=='-')
   {
    printf("volume down");
   }
   else if(a=='*')
   {
    printf("channel up");
   }
   else if(a=='$')
   {
    printf("channel down");
   }
   else if(a=='&')
   {
    printf("power on");
   }
   else if(a=='/')
   {
    printf("power of");
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
    printf("enter the operation(+,-,/,&,$,*):");
    scanf("%c",&a);
    remoate(a);
    return 0;
}