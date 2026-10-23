#include<stdio.h>
int main(){
	int t, r, h;
	scanf("%d", &t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%d %d", &r, &h);
		printf("Case #%d: %.2f\n", i, (float)(2*3.14*r*h)+(2*3.14*r*r));
	}
	return 0;
}
