#include <stdio.h>
int power(int x, int y) {
if (y == 0)
return 1;
return x * power(x, y - 1);
}
int main() {
int x, y;
printf("Enter the base (x): ");
scanf("%d", &x);
printf("Enter the exponent (y): ");
scanf("%d", &y);
printf("%d^%d = %d\n", x, y, power(x, y));
return 0;
}