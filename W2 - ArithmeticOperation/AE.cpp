#include <stdio.h>

int main(){
	long long int n, hit = 0, bonus = 0;
	scanf("%lld", &n); getchar();
	
	for (int i = 0 ; i < n; i++){
		hit += 100 + bonus;
		bonus += 50;
	}
	printf("%lld\n", hit);
	return 0;
}
