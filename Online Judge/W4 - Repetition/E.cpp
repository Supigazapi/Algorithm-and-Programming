#include <stdio.h>

int main() {
	int t;
    long long x;
    int p;
	scanf("%d", &t);
    for (int i = 0; i < t; i++) {
		scanf("%lld %d", &x, &p);
		int bit = (x >> p) & 1;
        printf("%d\n", bit);
    }

    return 0;
}

