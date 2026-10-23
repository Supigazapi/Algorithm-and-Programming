#include<stdio.h>
int f(int n, int *count){
	if(n == 0) return 1;
	if (n==1) return 2;
	if(n%5==0) {return n*2;}
	int result = f(n-1, count)+n+f(n-2, count)+n-2;
	if(n%3==0){
		(*count)++;
	}
	return result;
}

int main(){
	int t, m;
	scanf("%d", &t);
	for(int i=1 ; i<=t ; i++){
		scanf("%d", &m);
		int count = 0;
		int result = f(m, &count);
		printf("Case #%d: %d %d\n", i, result, count);
	}
	return 0;
}
