#include<stdio.h>

int main(){
	int t, n, a[101],x[101];
	int i,j;
	
	scanf("%d %d",&t,&n);
	for(i=0 ; i<t ; i++){
		scanf("%d",&a[i]);
	}
	for(i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
		for(j=0 ; j<t ; j++){
			if (x[i]==a[j]){
				a[j]=0;
			}
		}
	}
	//find max
	int max=0;
	for(i=0 ; i<t ; i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("Maximum number is ");
	if(max!=0){
		printf("%d\n",max);
	}
	else{
		printf("-1\n");
	}
	return 0;
}
