#include <stdio.h>
#include <string.h>

void reverseString(char *str, int start, int end) {
    if (start >= end) return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

int main() {
    int t;
    scanf("%d", &t); getchar();
    for (int i = 1; i <= t; i++) {
        char s[1001];
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = 0;
		reverseString(s, 0, strlen(s) - 1);
        printf("Case #%d: %s\n", t, s);
    }
    return 0;
}
