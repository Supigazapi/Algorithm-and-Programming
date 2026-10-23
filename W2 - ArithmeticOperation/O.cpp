#include<stdio.h>
int main(){
	int x, y, x1, y1, x2, y2, x3, y3;
	scanf("%d %d", &x, &y); getchar();
	scanf("%d %d", &x1, &y1); getchar();
	scanf("%d %d", &x2, &y2); getchar();
	scanf("%d %d", &x3, &y3); getchar();
	printf("%d\n%d\n%d\n%d\n", x*y, x1*y1, x2*y2, x3*y3);
	return 0;
}
