#include<stdio.h>
int main(){
	char N [110];
	char A [10];
	int U;
	scanf("%[^\n] %s %d", N, A, &U); getchar();
	
	printf("Name: %s\n", N);
	printf("NIS: %s\n", A);
	printf("Age: %d\n", U);
	return 0;
}
