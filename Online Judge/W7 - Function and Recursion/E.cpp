#include<stdio.h>
int f(int a[], int n){
	if (n == 0) return 0;
	return a[n-1] + f(a, n-1);
}

int main(){
	int t, n, a[100005];
	scanf("%d", &t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%d", &n);
		for(int j = 0 ; j < n ; j++){
			scanf("%d", &a[j]);
		}
		printf("Case #%d: %d\n", i, f(a, n));
	}
	return 0;
}
