#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[], int L, int R){
	int j, k;
	
	if(L < R){
		int pivot = L;
		j = L; 
		k = R+1;
		
		do{
			do{j++;} while(arr[j] < arr[pivot]);
			do{k--;} while(arr[k] > arr[pivot]);
			if(j<k) swap(&arr[j], &arr[k]);
		} while (j <= k);
		swap(&arr[pivot], &arr[k]);
		quickSort(arr, L, k-1);
		quickSort(arr, k+1, R);
	}
}

int binarySearch(int arr[], int e, int lb, int rb){
	int mid = lb + (rb-lb)/2;
	
	if(lb>rb){
		return -1;
	}
	
	if(arr[mid] == e) return mid;
	else if(arr[mid] > e){
		return binarySearch(arr, e, lb, mid - 1);
	} else if(arr[mid] < e){
		return binarySearch(arr, e, mid + 1, rb);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0 ; i<n ; i++){
		scanf("%d", &arr[i]);
	}
	quickSort(arr, 0, n-1);
	
	int diff = 0;
	for(int i=0 ; i<n-2 ; i++){
		int temp = arr[i+1] - arr[i];
		if(temp > diff){
			diff = temp;
		}
	}
	
	for(int i=1 ; i<n; i++){
		if(arr[i] - arr[i-1] == diff){
			printf("%d %d ", arr[i-1], arr[i]);	
		}
	}
}
