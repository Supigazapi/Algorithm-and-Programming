#include<stdio.h>
int main(){
	int t, n;
	scanf("%d", &t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%d", &n);
		printf("Case %d:", i);
		for(int j = 0 ; j < n ; j++){
			printf(" %d", (((j*(j+1))/2)+1));
		}
		printf("\n");
	}
	return 0;
}
