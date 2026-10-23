#include<stdio.h>

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int t;
	for(int j=1 ; j>=t ; j++){
		fscanf(fp, "%d", &t);
		int n, x, total;
		fscanf(fp, "%d", &n);
		for(int i=0 ; i<n ; i++){
			fscanf(fp, "%d", &x);
			total += x;
		}
		printf("Case #%d: %d %d", j, 2*4*total, 2*2*total);
	}
}
