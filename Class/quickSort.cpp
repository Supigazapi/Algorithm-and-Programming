#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[], int L, int R){
	int j, k; //j dari kiri, k dari kanan
	
	if(L < R){
		int pivot = L;
		j = L; //mulai dari paling kiri (sebenarnya harusnya dari luar juga, 
		// karena harusnya dari setelah pivot, makanya dimulai dari pivot.)
		k = R+1; //mulai dari paling kanan (mulai dari luar kanan, makanya +1)
		
		do{
			do{j++;} while(arr[j] > arr[pivot]); //patokan sort, untuk ganti asc desc
			do{k--;} while(arr[k] < arr[pivot]); //patokan sort, untuk ganti asc desc
			if(j<k) swap(&arr[j], &arr[k]);
		} while (j <= k); //belum crossing
		swap(&arr[pivot], &arr[k]);
		quickSort(arr, L, k-1); //group A
		quickSort(arr, k+1, R); //group B
	}
}

int main(){
	int arr[] = {30, 10, 50, 40, 20, 90, 70, 60, 100, 80};
	quickSort(arr, 0, 9);
	for(int i = 0 ; i<10 ; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
