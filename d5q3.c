#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int start = 0, end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}

int main() {
    int n;
    printf("Enter the number of strings you want to check: ");
    scanf("%d", &n);

    getchar();

    char str[100];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(str, sizeof(str), stdin);

        str[strcspn(str, "\n")] = '\0';

        if (isPalindrome(str)) {
            printf("String %d: \"%s\" is a palindrome.\n", i + 1, str);
        } else {
            printf("String %d: \"%s\" is not a palindrome.\n", i + 1, str);
        }
    }
    return 0;
}
