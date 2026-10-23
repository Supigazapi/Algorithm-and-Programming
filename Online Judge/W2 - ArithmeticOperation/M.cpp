#include<stdio.h>
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%.2lf%%\n", (float)100*x/y);
	return 0;
}
