#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    long long outcomes = (1LL << N) - 1;
    printf("%lld\n", outcomes);
    
    return 0;
}
