#include <stdio.h>

int main() {
    int num1, num2, num3, num4, smallest;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 <= num2) {
        if (num1 <= num3) {
            if (num1 <= num4) {
                smallest = num1;
            } else {
                smallest = num4;
            }
        } else {
            if (num3 <= num4) {
                smallest = num3;
            } else {
                smallest = num4;
            }
        }
    } else {
        if (num2 <= num3) {
            if (num2 <= num4) {
                smallest = num2;
            } else {
                smallest = num4;
            }
        } else {
            if (num3 <= num4) {
                smallest = num3;
            } else {
                smallest = num4;
            }
        }
    }
