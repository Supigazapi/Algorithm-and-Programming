#include<stdio.h>
int main(){
	float n, m, j, l, b, total, total_score, avg;
	scanf("%f %f %f %f", &n, &j, &l, &b);
	for (int i = 0 ; i < n ; i++){
		scanf("%f", &m);
		total += m;
	}
	total_score = total + j + l + b;
	avg = total_score/(n+3);
	if (j>=avg) {
		printf("Jojo lolos\n");
	} else {
		printf("Jojo tidak lolos\n");
	}
	if (l>=avg) {
		printf("Lili lolos\n");
	} else {
		printf("Lili tidak lolos\n");
	}
	if (b>=avg) {
		printf("Bibi lolos\n");
	} else {
		printf("Bibi tidak lolos\n");
		}
	return 0;
}
