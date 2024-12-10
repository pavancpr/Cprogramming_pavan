#include<stdio.h>
int main()
{
    char letter,a,e,i,o,u;
    printf("enter the alphabet:");
    scanf("%c",&letter);
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
    {
        printf("%cis vowel",letter);
    }
    else
    {
        printf("%c is consonant",letter);
    }
    return 0;
}