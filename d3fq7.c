#include <stdio.h>
int fibonacci(int n) {
if (n <= 1)
return n;
return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
int n;
printf("Enter the number of Fibonacci terms: ");
scanf("%d", &n);
printf("The first %d Fibonacci numbers are:\n", n);
for (int i = 0; i < n; i++) {
printf("%d ", fibonacci(i));
}
printf("\n");
return 0;
}