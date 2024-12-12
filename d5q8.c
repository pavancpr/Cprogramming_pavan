#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    getchar();

    char str[100];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(str, sizeof(str), stdin);

        str[strcspn(str, "\n")] = '\0';

        int vowelCount = countVowels(str);
        printf("String %d: \"%s\" has %d vowel(s).\n", i + 1, str, vowelCount);
    }
    return 0;
