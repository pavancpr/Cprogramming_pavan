#include <stdio.h>
#include <string.h>

void concatenateStrings(char destination[], char source[]) {
    int destLen = strlen(destination);
    int i = 0;

    while (source[i] != '\0') {
        destination[destLen + i] = source[i];
        i++;
    }
    destination[destLen + i] = '\0'; 
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    getchar();

    char result[1000] = ""; 
    char str[100];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(str, sizeof(str), stdin);

        str[strcspn(str, "\n")] = '\0';

        concatenateStrings(result, str); 
\
        if (i < n - 1) {
            concatenateStrings(result, " ");
        }
    }

    printf("\nConcatenated string: \"%s\"\n", result);
    return 0;
}
