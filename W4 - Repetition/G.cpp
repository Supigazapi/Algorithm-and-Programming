#include<stdio.h>
int main(){
	float n, m, total;
	scanf("%f", &n);
	for (int i = 0 ; i < n ; i++){
		scanf("%f", &m);
		total += m;
	}
	printf("%.0f\n", total);
	return 0;
}
