#include<stdio.h>
#include<string.h>

struct data{
	char nim[11];
	char name[21];
}arr[1001];

void swap(struct data *a, struct data *b){
	struct data temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int n;
	fscanf(fp, "%d", &n);
	for(int i=0 ; i<n ; i++){
		fscanf(fp, "%s %s", arr[i].nim, arr[i].name);
	}
	
	for(int i=0 ; i<n-1 ; i++){
		for(int j=0 ; j<n-1-i ; j++){
			if(strcmp(arr[j].nim, arr[j+1].nim)>0){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
	
	for(int i=0 ; i<n ; i++){
		printf("%s %s\n", arr[i].nim, arr[i].name);
	}
	
	fclose(fp);
	return 0;
}
