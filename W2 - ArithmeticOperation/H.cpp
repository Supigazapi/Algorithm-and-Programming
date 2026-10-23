#include <stdio.h>
int main(){
	int a, b, c, d, a2, b2, c2, d2, a3, b3, c3, d3;
	scanf("%d %d %d %d", &a, &b, &c, &d); getchar();
	scanf("%d %d %d %d", &a2, &b2, &c2, &d2); getchar();
	scanf("%d %d %d %d", &a3, &b3, &c3, &d3); getchar();

	printf("%.2f\n", (float)2*a/1+4*b/2+6*c/3+4*d/4);
	printf("%.2f\n", (float)2*a2/1+4*b2/2+6*c2/3+4*d2/4);
	printf("%.2f\n", (float)2*a3/1+4*b3/2+6*c3/3+4*d3/4);
	return 0;
}
