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
	
	int t; //changes made
	scanf("%d", &t);
	int a, b, c; //a, b letak array, c modifikasiny
	for(int s = 0 ; s < t ; s++){
		scanf("%d %d %d", &a, &b, &c);
		matrix[a-1][b-1] = c;
	}
	
	for(int i = 0 ; i < x ; i++){
		for(int j = 0 ; j < y ; j++){			
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
