#include <stdio.h>
int main() {
int num, i;
double factorial = 1;
printf("Enter a number to find its factorial: ");
scanf("%d", &num);
if (num < 0)
{
printf("Factorial of negative numbers doesn't exist.\n");
}
else {
for (i = 1; i <= num; i++) {
factorial *= i; }
printf("Factorial of %d is: %0.3lf\n", num, factorial);
}
return 0;
}