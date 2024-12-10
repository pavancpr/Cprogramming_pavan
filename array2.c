#include<stdio.h>
int main()
{
    char alphabets[4];
    printf("alpha1:");
    scanf("%s",&alphabets[0]);
    printf("alpha2:");
    scanf("%s",&alphabets[1]);
    printf("alpha3:");
    scanf("%s",&alphabets[2]);
    printf("alpha4:");
    scanf("%s",&alphabets[3]);
    printf("%c",alphabets[0]);
    return 0;
}