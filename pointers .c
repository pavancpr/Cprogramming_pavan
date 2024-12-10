#include<stdio.h>
int main (){
    int age=18;
    int*ptr=&age;
    printf("%d\n",age);
    printf("%p\n",age);
    printf("%p\n",*ptr);
    printf("%d\n",*ptr);
}

