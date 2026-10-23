#include<stdio.h>
int main(){
	double T, A, B, C;
	scanf("%lf %lf %lf %lf", &T, &A, &B, &C); getchar();
	printf("%.2lf %.2lf %.2lf\n", A*4/5, (A*9/5)+32, A+273);
	printf("%.2lf %.2lf %.2lf\n", B*4/5, (B*9/5)+32, B+273);
	printf("%.2lf %.2lf %.2lf\n", C*4/5, (C*9/5)+32, C+273);
	return 0;
}
