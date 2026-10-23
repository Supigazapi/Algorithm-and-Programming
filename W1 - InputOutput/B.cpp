#include<stdio.h>
int main(){
	int num, n;
	scanf("%d %d", &num, &n); getchar();
	for(int i = 1 ; i <= n ; i++){
		printf ("%d\n", num);
		num++;
	}
	return 0;
}
