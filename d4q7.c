#include <stdio.h>

int main() {
    int n, searchElement, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to count: ");
    scanf("%d", &searchElement);

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            count++;
        }
    }

    printf("The element %d occurs %d times in the array.\n", searchElement, count);
    return 0;
}