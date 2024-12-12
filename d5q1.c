#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int start = 0, end = strlen(str) - 1;
    char temp;
    
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    printf("Enter the number of strings you want to reverse: ");
    scanf("%d", &n);
 
    getchar();
    
    char str[100];
    
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(str, sizeof(str), stdin);
        
        str[strcspn(str, "\n")] = '\0';
        
        reverseString(str);
        printf("Reversed string %d: %s\n", i + 1, str);
    }
    return 0;
}