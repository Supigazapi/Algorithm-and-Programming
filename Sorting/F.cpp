#include<stdio.h>
#include<string.h>

struct data{
	char s[11];
	int t;
}arr[100];

void swap(struct data *a, struct data *b){
	struct data temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0 ; i<n ; i++){
		scanf("%s %d", arr[i].s, &arr[i].t);
	}
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n-1-i ; j++){
			if(arr[j].t > arr[j+1].t){
				swap(&arr[j], &arr[j+1]);
			} else if(arr[j].t == arr[j+1].t){
				if(strcmp(arr[j].s, arr[j+1].s)>0){
					swap(&arr[j], &arr[j+1]);
				}
			}
		}
	}
	for(int i=0 ; i<n ; i++){
		printf("%s\n", arr[i].s);
	}
	return 0;
}
