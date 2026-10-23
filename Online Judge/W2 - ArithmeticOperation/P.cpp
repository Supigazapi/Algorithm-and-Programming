#include<stdio.h>
int main(){
	double n, p, n1, p1, n2, p2, n3, p3;
	scanf("%lf %lf", &n, &p); getchar();
	scanf("%lf %lf", &n1, &p1); getchar();
	scanf("%lf %lf", &n2, &p2); getchar();
	scanf("%lf %lf", &n3, &p3); getchar();
	printf("$%.2lf\n", p/(1-n/100));
	printf("$%.2lf\n", p1/(1-n1/100));
	printf("$%.2lf\n", p2/(1-n2/100));
	printf("$%.2lf\n", p3/(1-n3/100));
	return 0;
}
