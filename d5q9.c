#include <stdio.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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

        sortArray(arr, size);

        printf("Sorted array %d: ", i + 1);
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;
