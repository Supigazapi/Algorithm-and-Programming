#include<stdio.h>
int main(){
	int a, b, c, d;
	char e [11];
	for(int i = 0 ; i < 5 ; i++){
		scanf("%s %d:%d-%d:%d", &e, &a, &b, &c, &d); getchar();
		a--;
		c--;
		printf("%s %02d:%02d-%02d:%02d\n", e, a, b, c, d);
	}
	return 0;
}
