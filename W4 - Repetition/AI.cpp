#include<stdio.h>
int main(){
	int t, n;
	scanf("%d", &t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%d", &n);
		int array[n];
		long long sum = 0;
		for (int j = 0; j < n; j++) {
            scanf("%d", &array[j]);
            sum += array[j];
        }
        if (sum % 2 != 0) {
            printf("Case #%d: No\n", i);
            continue;
        }
        long long sum2 = sum/2;
        long long temp_sum = 0;
        int split = 0;
        
        for(int j = 0; j < n; j++){
        	temp_sum += array[j];
        	if(temp_sum == sum2){
        		split = 1;
				break;
			}
		}
		if(split >= 1){
			printf("Case #%d: Yes\n", i);
		} else {
			printf("Case #%d: No\n", i);
		}
	}
	return 0;
}
