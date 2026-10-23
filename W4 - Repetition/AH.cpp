#include<stdio.h>
#include<string.h>
int main(){
	int t;
	long long n;
	scanf("%d", &t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%lld", &n);
		int count = 0;
		if(n == 0){
			count++;
		} else {
			while (n != 0){
				n/= 10;
				count++;
			}
		}
		printf("Case #%d: %d\n", i, count);
	}
	return 0;
}
