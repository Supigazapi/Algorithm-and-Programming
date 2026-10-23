#include <stdio.h>

int main() {
    int N, Q;
    scanf("%d", &N);  // Read the number of elements in the array
    
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);  // Read the elements of the array
    }
    
    scanf("%d", &Q);  // Read the number of queries
    
    long long results[Q];  // Array to store results for all queries, use long long
    
    // Process each query
    for (int q = 0; q < Q; q++) {
        long long M;
        scanf("%lld", &M);  // Read the query limit
        
        int left = 0, right = 0, max_len = 0;
        long long current_sum = 0;  // Use long long for the sum to handle large sums
        
        // Sliding window approach
        while (right < N) {
            // Add the element at the right pointer to the current sum
            current_sum += A[right];
            
            // If the sum exceeds M, move the left pointer to shrink the window
            while (current_sum > M && left <= right) {
                current_sum -= A[left];
                left++;
            }
            
            // Check the length of the valid segment
            if (current_sum <= M) {
                max_len = (right - left + 1 > max_len) ? (right - left + 1) : max_len;
            }
            
            // Move the right pointer
            right++;
        }
        
        // If no valid segment was found, set max_len to -1
        if (max_len == 0) {
            max_len = -1;
        }
        
        // Store the result for the current query
        results[q] = max_len;
    }
    
    // Output all results at once
    for (int q = 0; q < Q; q++) {
        printf("Case #%d: %lld\n", q + 1, results[q]);
    }
    
    return 0;
}

