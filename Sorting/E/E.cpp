#include<stdio.h>
#include<string.h>

struct data{
	char city[1005];
	float temp;
	char unit;
	float conv;
}arr[100];

void swap(struct data *a, struct data *b){
	struct data temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int n = 0;
	while(!feof(fp)){
		fscanf(fp, "%[^#]#%f#%c\n", &arr[n].city, &arr[n].temp, &arr[n].unit);
		n++;
	}
	
	for(int i=0 ; i<n ; i++){
		if(arr[i].unit == 'F'){
			arr[i].conv = (arr[i].temp-32) * (5.0/9.0);
		} else if(arr[i].unit == 'C'){
			arr[i].conv = arr[i].temp;
		}
	}
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(arr[j].conv > arr[j+1].conv){
				swap(&arr[j], &arr[j+1]);
			} 
			else if(arr[j].conv == arr[j+1].conv){
				if(strcmp(arr[j].city, arr[j+1].city) > 0){
					swap(&arr[j], &arr[j+1]);
				}
			}
		}
	}
	
	for(int i=0 ; i<n ; i++){
		printf("%s is %.2f%c\n", arr[i].city, arr[i].temp, arr[i].unit);
	}

	fclose(fp);
	return 0;
}
