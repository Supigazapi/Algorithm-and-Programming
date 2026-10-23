#include<stdio.h>
struct data{
	char name[31];
	int ml;
	int price;
}arr[1001];

void swap(struct data *a, struct data*b){
	struct data temp = *a;
	*a = *b;
	*b = temp;
}

int getPrice(int ml) {
    if (ml > 700) {
        return 70000; // Beyond Venti
    } else if (ml > 591) {
        return 70000; // Charge for Beyond Venti
    } else if (ml > 473) {
        return 60000; // Grande
    } else if (ml > 354) {
        return 57000; // Tall
    } else {
        return 53000; // Not enough for any size
    }
}

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%[^#]#%d", &arr[i].name, &arr[i].ml);
	}
	
	for(int i=0; i<n; i++){
		arr[i].price = getPrice(arr[i].ml);
	}
	
	for(int i=0 ; i<n-1 ; i++){
		for(int j=0 ; j<n-1-i ; j++){
			if(arr[j].price > arr[j+1].price){
				swap(&arr[i], &arr[i+1]);
			}
		}
	}
	
	for(int i=0 ; i<n ; i++){
		printf("%s - %d", arr[i].name, arr[i].price);
	}
	
	return 0;
}
