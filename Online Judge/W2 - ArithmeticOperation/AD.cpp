#include <stdio.h>

int main(){
	int Ph, M, Pu;
	float A;
	scanf("%d %d %d", &Ph, &M, &Pu);
	A = ((20.0/100)*Ph)+((30.0/100)*M)+((50.0/100)*Pu);
	printf("%.2f\n", A);
	return 0;
}
