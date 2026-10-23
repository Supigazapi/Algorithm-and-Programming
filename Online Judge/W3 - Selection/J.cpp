#include <stdio.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);
    
    for (int t = 0; t <= 100; t++) {
        int pos1 = x + t;  // Position of the first elevator (going up)
        int pos2 = y - t;  // Position of the second elevator (going down)
        
        // Check if at time t all elevators are at the same floor
        if (pos1 == pos2 && pos1 == k) {
            printf("%d\n", t);  // Output the time when they meet
            return 0;
        }
    }
    
    // If no such time exists, output -1
    printf("-1\n");
    
    return 0;
}
