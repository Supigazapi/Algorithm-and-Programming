#include <stdio.h>

int main(){
	int T, U, V;
	float A;
	scanf("%d %d %d", &T, &U, &V);
	A = ((20.0/100)*T)+((30.0/100)*U)+((50.0/100)*V);
	printf("%.2f\n", A);
	return 0;
}
