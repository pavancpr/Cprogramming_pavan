#include <stdio.h>

int isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; 
        }
    }
    return 1; 
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

        if (isSorted(arr, size)) {
            printf("Array %d is sorted.\n", i + 1);
        } else {
            printf("Array %d is not sorted.\n", i + 1);
        }
    }
    return 0;
}