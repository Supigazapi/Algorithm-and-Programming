#include<stdio.h>
int main(){
	float t, n, m, o, p, total;
	// t testcase, n number of dishes, m total money
	scanf("%f", &t);
	for (int i = 1 ; i <= t ; i++){
		scanf("%f %f", &n, &m);
		for (int z = 0 ; z < n ; z++){
		scanf ("%d", &p);
		total += p;
		printf("%d", total);
	}
//		if (total >= m) {
//			printf("Case #%d: Wash dishes\n", i);
//		} else {
//			printf("Case #%d: No worries\n", i);
//		}
	}
	return 0;
}
