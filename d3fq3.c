#include <stdio.h>
int sumOfDigits(int num) {
int sum = 0;
while (num != 0) {
sum += num % 10; num /= 10; }
return sum;
}
int main() {
int number;
printf("Enter a number to calculate the sum of its digits: ");
scanf("%d", &number);
printf("Sum of digits of %d is: %d\n", number, sumOfDigits(number));
return 0;
}