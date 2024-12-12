#include <stdio.h>
#include <string.h>

int countCharacterFrequency(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
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
    char ch;

    for (int i = 0; i < n; i++) {
        printf("\nEnter string %d: ", i + 1);
        fgets(str, sizeof(str), stdin);

        str[strcspn(str, "\n")] = '\0';

        printf("Enter the character to find in string %d: ", i + 1);
        scanf("%c", &ch);

        getchar();

        int frequency = countCharacterFrequency(str, ch);
        printf("Character '%c' appears %d times in string \"%s\".\n", ch, frequency, str);
    }
    return 0;
