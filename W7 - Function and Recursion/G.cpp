#include <stdio.h>
#include <string.h>

// Recursive function to check if the string is a palindrome
int palindrome(char *str, int start, int end) {
    if (start >= end) return 1;
    if (str[start] != str[end]) return 0;
    return palindrome(str, start + 1, end - 1);
}

int main() {
    int t;
    scanf("%d", &t); getchar();

    for (int i = 1; i <= t; i++) {
        char s[1001];
        fgets(s, sizeof(s), stdin);
		s[strcspn(s, "\n")] = 0;
        int result = palindrome(s, 0, strlen(s) - 1);
        if (result) {
            printf("Case #%d: yes\n", i);
        } else {
            printf("Case #%d: no\n", i);
        }
    }

    return 0;
}
