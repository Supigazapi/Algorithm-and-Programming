#include<stdio.h>

void merge(int arr[], int lb, int mid, int rb){
	int nL = mid+1 - lb;
	int nR = rb - mid;
	
	int subL[nL], subR[nR];
	for(int i=0 ; i<nL ; i++){
		subL[i] = arr[i + lb];
	}
	for(int i=0 ; i<nR ; i++){
		subR[i] = arr[i + mid + 1];
	}
	
	int i=0, j=0, k=lb;
	while(i<nL && j<nR){
		if(subL[i] < subR[j]){
			arr[k] = subL[i];
			i++;
		} else {
			arr[k] = subR[j];
			j++;
		} k++;
	}
	while(i<nL){
		arr[k] = subL[i];
		i++;
		k++;
	}
	while(j<nR){
		arr[k] = subR[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int lb, int rb){
	int mid = lb +(rb-lb)/2;
	if(lb<rb){
		mergeSort(arr, lb, mid);
		mergeSort(arr, mid+1, rb);
		merge(arr, lb, mid, rb);
	}
}

int binarySearch(int arr[], int e, int lb, int rb){
	int mid = lb +(rb-lb)/2;
	if(lb>rb) return -2;
	if(arr[mid] == e) return mid;
	else if(arr[mid] > e){
		return binarySearch(arr, e, lb, mid-1);
	} else if(arr[mid] < e){
		return binarySearch(arr, e, mid+1, rb);
	}
}

int main(){
	int n;
	scanf("%d", &n); getchar();
	int a[n];
	for(int i=0 ; i<n ; i++){
		scanf("%d", &a[i]);
	}
	int q;
	scanf("%d", &q);
	int x[q];
	for(int i=0 ; i<q ; i++){
		scanf("%d", &x[i]);			
	}
	mergeSort(a, 0, n-1);
	for(int i=0 ; i<q ; i++){
		int idx = binarySearch(a, x[i], 0, n-1);
		printf("%d\n", idx+1);
	}
}
