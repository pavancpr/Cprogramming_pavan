#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[10];
    int units;
    const float mincharge=50;
    const double slab1=5;
    const double slab2=7;
    const double slab3=10;
    double billamt=0.0;
    printf("enter the name of consumer:");
    scanf("%s",&name);
    printf("enter the number of units:");
    scanf("%d",&units);
    billamt=billamt+mincharge;
    if(units<=100)
    {
        billamt=billamt+(units*slab1);
    }
    else if(units>100&&units<=300)
    {
        billamt=billamt+((100*slab1)+(units-100)*slab2);
    }
    else
    {
        billamt=billamt+(100*slab1)+(200*slab2)+((units-300)*slab3);
    }
    double tax=0.1*billamt;
    double totalbillamt=billamt+tax;
    printf("total bill amount=%lf",totalbillamt);
    return 0;
}