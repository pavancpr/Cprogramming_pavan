#include <stdio.h>

int main() 
{
    int sub1,sub2,sub3,sub4;
    printf("enter the four subject marks:");
    scanf("%d%d%d%d",&sub1,&sub2,&sub3,&sub4);
    float marks=(sub1+sub2+sub3+sub4)/4;
    printf("average marks=%f",marks);
    if(sub1>=35&&sub2>=35&&sub3>=35&&sub4>=35)
    {
    if(marks>100)
    {
        printf("\nplease give valid marks");
    }
    else if(marks>35)
    {
       if(marks>=90)
       {
           printf("\nthe grade is A");
       }
       else if(marks>=80)
       {
           printf("\nthe grade is B");
       }
       else if(marks>=70)
       {
           printf("\nthe grade is c");
       }
       else if(marks>=60)
       {
 printf("\nthe grade is D");
       }
       else if(marks>=50)
       {
           printf("\nthe grade is E");
       }
       else
       {
           printf("\nthe grade is PASS");
       }
    }
    else
    {
        printf("\nthe student is fail");
    }
    }
    else
    {
        printf("\nthe student is fail");
    }
    return 0;
}