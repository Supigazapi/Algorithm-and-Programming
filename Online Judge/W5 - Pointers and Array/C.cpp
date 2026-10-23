#include<stdio.h>
int main(){
	int t, n, j;
	int catalog[100005];
	int a, b;
	scanf("%d", &t);
	for(int i=1 ; i<=t ; i++){
		scanf("%d", &catalog[i]);
	}
		scanf("%d", &n);
	for(int j=1 ; j<=n ; j++){
		scanf("%d %d", &a, &b);
		catalog[a] = b;
		printf("Case #%d:", j);
		for(int k=1 ; k<=t ; k++){
			printf(" %d", catalog[k]);
		}
		puts("");
	}
	
	
	return 0;
}
