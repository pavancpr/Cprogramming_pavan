#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 4 == 0) {
        if (num % 6 == 0) {
            printf("The number %d is divisible by both 4 and 6.\n", num);
        } else {
            printf("The number %d is divisible by 4 but not by 6.\n", num);
        }
    } else {
        if (num % 6 == 0) {
            printf("The number %d is divisible by 6 but not by 4.\n", num);
        } else {
            printf("The number %d is not divisible by 4 or 6.\n", num);
        }
    }
    return 0;
}