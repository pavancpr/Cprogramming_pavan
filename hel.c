#include <stdio.h>
int main() {
    int i,sum;
    printf("enter the number:");
    scanf("%d",&i);
    while(i!=0)
    {
        sum+=i%10;
        i=i/=10;
    }
    printf("sum=%d",sum);
    return 0;
}