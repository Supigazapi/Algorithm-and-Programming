#include<stdio.h>
int main(){
	int t, n;
	scanf("%d", &t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%d", &n);
		printf("Case #%d:\n", i);
		for(int j = 0 ; j < n ; j++){
			for(int m = 0 ; m < n - j - 1 ; m++){
				printf(" ");
			}
			for(int k = 0; k <= j; k++){
	            if((j + k) % 2 == 0){
	                printf("*");
	            } else {
	        	    printf("#");
	            }
	        }
	    	printf("\n");
    	}
	}
	return 0;
}
