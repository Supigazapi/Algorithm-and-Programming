#include<stdio.h>
int main(){
	float t, a, b, c;
	scanf ("%f", &t);
	for (int i = 1 ; i <= t ; i++){
		scanf("%f %f %f", &a, &b, &c);
		if ((b/100)*a > c){
			printf("Case #%d: %.0f\n", i, c);
		}else{
			printf("Case #%d: %.0f\n", i, (b/100)*a);
		}
	}
	return 0;
}
