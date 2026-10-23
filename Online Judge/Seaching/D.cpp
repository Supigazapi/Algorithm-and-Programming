#include<stdio.h>
#include<string.h>

struct data{
	char name[11];
	int score;
}arr[1000];

void swap(struct data *a, struct data *b){
	struct data temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int t;
	scanf("%d", &t); getchar();
	for(int i=0 ; i<t ; i++){
		int n;
		scanf("%d", &n); getchar();
		for(int j=0 ; j<n ; j++){
			scanf("%[^#]#%d", arr[j].name, &arr[j].score); getchar();
		}
		char name1[11];
		scanf("%s", name1);
		for(int j=0 ; j<n-1 ; j++){
			for(int k=0 ; k<n-1-j ; k++){
				if(arr[k].score < arr[k+1].score){
					swap(&arr[k], &arr[k+1]);
				}
			}
		}
		int idx = -1;
		for(int j=0 ; j<n ; j++){
			if(strcmp(arr[j].name, name1) == 0){
				idx = j+1;
			}
		}
		
		printf("Case #%d: %d\n", i+1, idx);
	}
	return 0;
}
