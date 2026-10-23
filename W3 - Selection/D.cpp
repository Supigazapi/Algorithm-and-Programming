#include<stdio.h>
int main(){
	int t, total;
	long long n, m;
	scanf ("%d", &t);
	for (int i = 1 ; i <= t ; i++){
		scanf("%lld %lld", &n, &m);
		total = n*m;
		if ((n*m) %2 == 0){
			printf("Case#%d: Party time!\n", i);
		} else {
			printf("Case#%d: Need more frogs\n", i);
		}
	}
	return 0;
}
