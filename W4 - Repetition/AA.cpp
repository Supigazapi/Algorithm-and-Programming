#include<stdio.h>
int main(){
	int n, k;
	int total=0;
	scanf("%d", &n);
	for(int i=0 ; i<n ; i++){
		scanf("%d", &k);
		total += k;
		if(total == 9){
			total = 21;
		} else if (total == 33){
			total = 42;
		} else if (total == 76){
			total = 92;
		} else if (total == 53){
			total = 37;
		} else if (total == 80){
			total = 59;
		} else if (total == 97){
			total = 88;
		}
	}
	printf("%d\n", total);
	return 0;
}
