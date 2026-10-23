#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int matrix[n][n];
	int a, b;
	int col[n], row[n];
	int col_sum, row_sum;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", &matrix[i][j]);
			col[j] += matrix[i][j];
			col_sum *= col[j];
			
			row[i] += matrix[i][j];
			row_sum *= row[i];
		}
	}
	for(int i = 0 ; i < n ; i++){
		printf(" %d", col[i]);
	} puts("");
	for(int i = 0 ; i < n ; i++){
		printf(" %d", row[i]);
	} puts("");
	if(col_sum < row_sum){
		printf("KABUR\n");
	} else {
		printf("menang\n");
	}
	return 0;
}
