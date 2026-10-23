#include<stdio.h>

void merge(int arr[], int low, int mid, int high){
	int Lidx = low;
	int Ridx = mid+1;
	int Cidx = low; //Patokannya yang paling kecil, untuk nampung array sort sementara
	int temp[100]; //nampung battle group A dan B
	
	//Battle group A vs B
	while(Lidx <= mid && Ridx <= high){
		if(arr[Lidx] < arr[Ridx]){ //Patokan Sorting, diganti disini dengan struct, angka, nama, dsb.
			temp[Cidx++] = arr[Lidx++]; //++ untuk kasih tahu ganti captain jadi arr di sebelahnya
		} else {
			temp[Cidx++] = arr[Ridx++];
		}
	}
	
	//Kalau 1 group udah kalah dan 1nya masih ada
	if(Lidx > mid){ //Group A sudah habis duluan
		while(Ridx <= high){
			temp[Cidx++] = arr[Ridx++];
		}
	} else { //Group B sudah habis duluan
		while(Lidx <= mid){
			temp[Cidx++] = arr[Lidx++];
		}
	}
	for(int i=low ; i<=high ; i++){
		arr[i] = temp[i];
	}
}

//Konsep Merge Sort: Dipecah 2 terus menerus sampai dia jadi satu-satu. 
void mergeSort(int arr[], int low, int high){
	int mid;
	if(low < high){
		mid = (low+high)/2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid+1, high); //mid+1 == m2
		merge(arr, low, mid, high);
	}
}

int binarySearch(int arr[], int search, int low, int high){
	int middle;
	while(low <= high){
		middle = (low+high)/2;
		if(search == arr[middle]) return middle;
		//kalau lebih kecil, cari ke kiri, high geeser ke kiri
		else if(search < arr[middle]) high = middle-1;
		//kalau lebih besar, cari ke kanan, low geser ke kanan
		else low = middle+1;
	}
	return -1;
}

int main(){
	int arr[] = {30, 10, 50, 40, 20, 90, 70, 60, 100, 80};
	mergeSort(arr, 0, 9);
	int idx = binarySearch(arr, 77, 0, 9); //(arr, angka dicari, low, high)
	if(idx == -1){
		printf("Not Found\n");
	} else {
		printf("Data: %d\n", arr[idx]);
	}
	for(int i = 0 ; i<10 ; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
