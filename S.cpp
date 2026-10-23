#include<stdio.h>
int main(){
	double L, B, H, A;
	scanf("%lf %lf %lf", &L, &B, &H);
	A = (3*B*L) + (B*H);
	printf("%.3lf\n", A);
	return 0;
}
