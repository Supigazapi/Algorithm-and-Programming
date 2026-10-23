#include<stdio.h>
int main(){
	double T, A, B, C, D, E, F;
	scanf("%lf", &T); getchar();
	scanf("%lf %lf", &A, &B); getchar();
	scanf("%lf %lf", &C, &D); getchar();
	scanf("%lf %lf", &E, &F); getchar();
	printf("%.2lf\n%.2lf\n%.2lf\n", A*B/360, C*D/360, E*F/360);
	return 0;
}
