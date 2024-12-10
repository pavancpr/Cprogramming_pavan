#include<stdio.h>
int main()
{
    
    int a[]={10,30,20,50,25};
    int max=a[0];
    for(int i=1;i<=4;i++)
    {
        if(a[i]>max)
        max=a[i];
        
    }
        printf("The maximum element in array a is %d",max);
        return 0;
}