#include<stdio.h>
int main(){
	int t, n;
	long long a;
	scanf("%d", &t);
	for (int i = 1 ; i <= t ; i++){
		scanf ("%d", &n);
		long long int items = 0;
		for (int j = 0 ; j < n ; j++){
			scanf("%lld", &a);
			items += a;
		} printf("Case #%d: %lld\n", i, items);
	}
	return 0;
}
