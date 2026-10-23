#include <stdio.h>

int binarySearch(long long int target, int left, int right, long long int arr[]){

	if(target > arr[right]){
		return right + 1;
	}

	if(target < arr[left]){
		return -1;
	}

	while (left <= right)
	{
		int mid = left +(right - left)/2;
		
		if(target == arr[mid])
		{
			return mid+1;
		} 
		else if (target > arr[mid])
		{
			if(target < arr[mid + 1])
			{
				return mid + 1;
			}
			
			left = mid + 1;
		}
		else if (target < arr[mid])
		{
			if(target > arr[mid - 1])
			{
				return mid - 1 + 1;
			}
			right = mid - 1;
		}	
	}
	return -1;
}

int main(){
	
	int n;
	scanf("%d", &n);
	
	long long int arr[n];
	
	for(int i = 0; i < n ; i++)
	{
		scanf(" %lld", &arr[i]);
	}
	
	long long int sum[n];// untuk menyimpan hasil jumlahan
	
	for(int i = 0; i < n; i++)
	{
		if(i == 0){
			sum[i] = arr[i];
		} else {
			sum[i]= arr[i] + sum[i-1];
		}
	}
	
	int tc;
	scanf("%d", &tc);
	
	for(int t = 1; t <= tc; t++){
		long long int target;
		scanf(" %lld", &target);
		
		long long int index = binarySearch(target, 0 , n-1, sum);
		
		printf("Case #%d: %lld\n", t, index); 
	}
	
	
	return 0;
}
