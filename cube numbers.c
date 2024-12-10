#include <stdio.h>
int cubeValue(int number) {
    return number * number * number;
}

int main() {
    int num = 3;
    int result = cubeValue(num);
    printf("The cube of %d is %d\n", num, result);
    return 0;
}