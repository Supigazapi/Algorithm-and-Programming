#include<stdio.h>
int f(int n){
	if (n == 1) return 1;
	if (n%2 == 0) return f(n/2);
	if (n%2 == 1) return f(n-1) + f(n+1);
}

int main(){
	int t, n;
	scanf("%d", &t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%d", &n);
		printf("Case #%d: %d\n", i, f(n));
	}
	return 0;
}
