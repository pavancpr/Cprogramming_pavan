#include <stdio.h>
int main() {
int n, i = 2, sum = 0;
printf("Enter a number: ");
scanf("%d", &n);
while (i <= n) {
sum += i;
i += 2;
}
printf("Sum of all even numbers from 1 to %d is: %d\n", n, sum);
return 0;
}