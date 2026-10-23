#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.2lf%%\n", (float)100*(a-b)/a);
	return 0;
}
