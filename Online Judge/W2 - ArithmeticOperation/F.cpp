#include<stdio.h>
int main(){
	int a, b, e, f, g, h;
	char c, d;
	scanf("%d %c %d %c", &a, &c, &b, &d); getchar();
	scanf("%d %c %d %c", &e, &c, &f, &d); getchar();
	scanf("%d %c %d %c", &g, &c, &h, &d); getchar();
	printf("%d\n%d\n%d\n", a+b, e+f, g+h);
	return 0;
}
