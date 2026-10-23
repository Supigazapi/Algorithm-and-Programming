#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    
    for (int t = 1; t <= T; t++) {
        int N;
        long long M;
        scanf("%d %lld", &N, &M);  
        
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]); 
        }
        
        long long prefix_sum[N + 1];
        prefix_sum[0] = 0;  
        
        for (int i = 1; i <= N; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + A[i - 1];  
        }

        int max_len = -1;
        
        for (int start = 0; start < N; start++) {
            for (int end = start; end < N; end++) {
                long long segment_sum = prefix_sum[end + 1] - prefix_sum[start];
                
                if (segment_sum <= M) {
                    int length = end - start + 1;
                    if (length > max_len) {
                        max_len = length;
                    }
                } else {
                    break;  
                }
            }
        }
        
        if (max_len == -1) {
            printf("Case #%d: -1\n", t);  
        } else {
            printf("Case #%d: %d\n", t, max_len);  
        }
    }
    
    return 0;
}

