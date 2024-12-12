#include <stdio.h>
#include <string.h>

int findMaxLength(char strings[][100], int n) {
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        int length = strlen(strings[i]);
        if (length > maxLength) {
            maxLength = length;
        }
    }
    return maxLength;
}

int main() {
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    getchar();

    char strings[n][100];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);

        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    int maxLength = findMaxLength(strings, n);
    printf("\nThe maximum length among the entered strings is: %d\n", maxLength);
    return 0;
}