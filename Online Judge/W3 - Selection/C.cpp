#include<stdio.h>
int main(){
	int t, a, b;
	scanf ("%d", &t);
	for (int i = 1 ; i <= t ; i++){
		scanf("%d %d", &a, &b);
		if (a>b){
			printf("Case #%d: Go-Jo\n", i);
		}
		else {
			printf("Case #%d: Bi-Pay\n", i);
		}
	}
}
