#include <stdio.h>

long long sum_of_squares(long long n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

long long find_smallest_n(long long M) {
    long long left = 1, right = 1000000;
    while (sum_of_squares(right) < M) {
        right *= 2;
    }
    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (sum_of_squares(mid) >= M) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        long long M;
        scanf("%lld", &M);
        printf("Case #%d: %lld\n", i, find_smallest_n(M));
    }
    return 0;
}
