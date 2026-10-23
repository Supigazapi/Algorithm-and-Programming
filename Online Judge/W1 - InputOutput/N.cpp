#include<stdio.h>
int main(){
	char N1 [100];
	double T1;
	int U1;
	char N2 [100];
	double T2;
	int U2;
	scanf("%s%lf%d%s%lf%d", N1, &T1, &U1, N2, &T2, &U2);
	printf("Name 1: %s\nHeight 1: %.2lf\nAge 1: %d\nName 2: %s\nHeight 2: %.2lf\nAge 2: %d\n", N1, T1, U1, N2, T2, U2);
	return 0;
}
