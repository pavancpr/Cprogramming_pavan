#include<stdio.h>
int main (){
    int age=18;
    int*ptr=&age;
    printf("%d\n",age);// value of age 
    printf("%p\n",age);// value of address
    printf("%p\n",*ptr);// value of address
    printf("%d\n",*ptr);// value of age
}
