#include <stdio.h>

voidfindLargestAndSmallest(int arr[], int size, int *largest, int *smallest) {
    *largest = arr[0];
    *smallest = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}

int main() {
    int numArrays, size;

    printf("Enter the number of arrays: ");
    scanf("%d", &numArrays);

    for (int i = 0; i < numArrays; i++) {
        printf("\nEnter the size of array %d: ", i + 1);
        scanf("%d", &size);

        int arr[size];
        printf("Enter %d elements for array %d: ", size, i + 1);
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr[j]);
        }

        int largest, smallest;
        findLargestAndSmallest(arr, size, &largest, &smallest);

        printf("For array %d:\n", i + 1);
        printf("Largest element: %d\n", largest);
        printf("Smallest element: %d\n", smallest);
    }
    return 0;
}