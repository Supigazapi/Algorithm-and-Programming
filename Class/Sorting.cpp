#include<stdio.h>
#include<string.h>

struct car{
    char brand[100];
    char type[100];
    int qty;
} second_car[50];

void init_car(){
    strcpy(second_car[0].brand, "Honda");
    strcpy(second_car[0].type, "Civic");
    second_car[0].qty = 10;

    strcpy(second_car[1].brand, "Honda");
    strcpy(second_car[1].type, "Accord");
    second_car[1].qty = 3;

    strcpy(second_car[2].brand, "Mazda");
    strcpy(second_car[2].type, "CX-5");
    second_car[2].qty = 8;

    strcpy(second_car[3].brand, "Toyota");
    strcpy(second_car[3].type, "Innova");
    second_car[3].qty = 10;

    strcpy(second_car[4].brand, "Toyota");
    strcpy(second_car[4].type, "Agya");
    second_car[4].qty = 17;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size){
    for(int cycle = 0; cycle < size - 1; cycle++){
        for(int i = size - 1; i > cycle; i--){
            if(arr[i] < arr[i-1])
                swap(&arr[i], &arr[i-1]);
        }
    }
}

void selectionSort(int data[], int n){
    for(int cycle = 1; cycle <= n - 1; cycle++){
        int smallest = cycle - 1;
        for(int i = cycle; i < n; i++){
            if(data[i] < data[smallest]){ 
                smallest = i;
            }
        }
        swap(&data[cycle-1], &data[smallest]);
    }
}

void insertionSort(int data[], int n){
    for(int cycle = 1; cycle <= n - 1; cycle++){
        int temp = data[cycle];
        int i;
        for(i = cycle - 1; i >= 0 && temp < data[i]; i--){
            data[i+1] = data[i];
        }
        data[i+1] = temp;
    }
}

void swap_car(struct car *a, struct car *b){
    struct car temp = *a;
    *a = *b;
    *b = temp;
}

void sortCarQty(int n){
    for(int cycle = 1; cycle <= n - 1; cycle++){
        for(int i = n - 1; i >= cycle; i--){
            if(second_car[i].qty < second_car[i-1].qty){
                swap_car(&second_car[i], &second_car[i-1]);
            }
        }
    }
}

void sortCarType(int n){
    for(int cycle = 1; cycle <= n - 1; cycle++){
        for(int i = n - 1; i >= cycle; i--){
            if(strcmp(second_car[i].type, second_car[i-1].type) < 0){
                swap_car(&second_car[i], &second_car[i-1]);
            }
        }
    }
}

void sortCarBrand(int n){
    for(int cycle = 1; cycle <= n - 1; cycle++){
        for(int i = n - 1; i >= cycle; i--){
            if(strcmp(second_car[i].brand, second_car[i-1].brand) < 0){
                swap_car(&second_car[i], &second_car[i-1]);
            }
        }
    }
}

void sortCarTypeBrand(int n){
    for(int cycle = 1; cycle <= n - 1; cycle++){
        for(int i = n - 1; i >= cycle; i--){
            if(strcmp(second_car[i].brand, second_car[i-1].brand) > 0){
                swap_car(&second_car[i], &second_car[i-1]);
            } else if(strcmp(second_car[i].brand, second_car[i-1].brand) == 0){
				if(strcmp(second_car[i].type, second_car[i-1].type) < 0){
                swap_car(&second_car[i], &second_car[i-1]);
				}
        	}
    	}
	}
}

int main(){
	init_car();
	int n = 5;
	sortCarTypeBrand(n);
	for(int i = 0; i < 5; i++){
        printf("%-15s | %-15s | %2d\n", second_car[i].brand, second_car[i].type, second_car[i].qty);
    }
    return 0;}
