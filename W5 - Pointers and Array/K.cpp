#include<stdio.h>
int fib(int n){
	if(n == 0 || n == 1) return 0;
	return fib(n-1) + fib(n-2);
}
int main(){
	int t, n;
	scanf("%d", &t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%d", &n);
		char s[n];
		scanf("%c %c", &s[0], &s[1]);
		printf("Case #%d: ", i);
		for(int j = 0 ; j < n ; j++){
			printf("%s", fib(n));
		}
		
	}
	return 0;
}
