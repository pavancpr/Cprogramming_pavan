#include <stdio.h>
int main()
{
    int arr[]={1,7,9,0,5,3,6,10};
    int n=8;
    int max=arr[0];
    for (int i=1;i<=n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("max:%d",max);
}