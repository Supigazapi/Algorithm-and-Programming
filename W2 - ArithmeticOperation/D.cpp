#include<stdio.h>
int main(){
	int N, M;
	scanf("%d %d", &N, &M); getchar();
	printf("%d\n", N);
	for(int i = 1 ; i <= M ; i++){
		printf("%d\n", N+1);
		N++;
	}
	return 0;
}
