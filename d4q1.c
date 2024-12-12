#include <stdio.h>

int main() {
    int number = 10;       
    int *ptr = &number;    
    printf("Initial value of number: %d\n", number);
    printf("Address of number: %p\n", (void*)&number);
    printf("Value stored in pointer ptr: %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 20;

    printf("\nAfter modifying value through pointer:\n");
    printf("Value of number: %d\n", number);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}