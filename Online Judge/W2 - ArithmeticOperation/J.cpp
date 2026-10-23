#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.4lf%%\n", (double) 100*b/a);
	return 0;
}
