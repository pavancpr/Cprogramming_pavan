#include <stdio.h>
int square(int num) {
return num * num;
}
int main() {
int number;
printf("Enter a number to calculate its square: ");
scanf("%d", &number);
printf("Square of %d is: %d\n", number, square(number));
return 0;