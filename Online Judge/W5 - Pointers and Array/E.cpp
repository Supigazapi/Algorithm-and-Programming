#include<stdio.h>
int main(){
	int t, x;
	scanf("%d", &t);
	for(int s = 1 ; s <= t ; s++){
		scanf("%d", &x);
		
		int matrix[x][x];
		int sum[x];
		
		for (int i = 0; i < x; i++) {
            sum[i] = 0;
        }
        
		for(int i = 0 ; i < x ; i++){
			for(int j = 0 ; j < x ; j++){
				scanf("%d", &matrix[i][j]);
				sum[j] += matrix[i][j];
			}
		}
		
		printf("Case #%d:", s);
		for(int i = 0 ; i < x ; i++){
				printf(" %d", sum[i]);
		}
		printf("\n");
	}
	return 0;
}
