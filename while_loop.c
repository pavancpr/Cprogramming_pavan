#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the no of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=1;j++){
            printf("%d",i+j);
        }
        printf("\n");
    }
    return 0;
}