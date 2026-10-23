#include<stdio.h>
int main(){
	int T, K, M, N;
	scanf("%d", &T); getchar();
	
	for(int i=1 ; i<=T ; i++){
		scanf("%d %d %d", &K, &M, &N);
		int A = M+N;
		if(K>A){
			printf("Case #%d: no\n", i);
		}else{
			printf("Case #%d: yes\n", i);
		}
	}
	return 0;
}
