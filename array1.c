#include<stdio.h>
int main()
{
    int marks[3];
    printf("phy :");
    scanf("%d",&marks[0]);
    printf("chem :");
    scanf("%d",&marks[8]);
    printf("math :");
    scanf("%d",&marks[5]);
    printf("phy=%d,",marks[0]); //phy
    printf("chem=%d,",marks[8]); // chem
    printf("math=%d\n",marks[5]); //math
    return 0;
}