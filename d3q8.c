#include <stdio.h>
int main() {
int num, reversed = 0, remainder;
printf("Enter a number to reverse: ");
scanf("%d", &num);
while (num != 0)
{
remainder = num % 10;
reversed = reversed * 10 + remainder;
num /= 10;
}
printf("Reversed number is: %d\n", reversed);
return 0;
}