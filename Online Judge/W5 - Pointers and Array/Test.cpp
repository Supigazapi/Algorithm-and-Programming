#include<stdio.h>
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	int matrix[x][y];
	for(int i = 0 ; i < x ; i++){
		for(int j = 0 ; j < y ; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for(int i = 0 ; i < x ; i++){
		for(int j = 0 ; j < y ; j++){			
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}
	
	
	return 0;
}
