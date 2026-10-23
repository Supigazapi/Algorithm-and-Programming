#include <stdio.h>
int main(){
	int A, B, C, D, E, F, G;
	scanf("%d %d", &A, &B);
	C = A+B;
	D = A-B;
	E = A*B;
	F = A/B;
	G = A%B;
	printf("%d\n%d\n%d\n%d\n%d\n", C, D, E, F, G);
	return 0;
}
