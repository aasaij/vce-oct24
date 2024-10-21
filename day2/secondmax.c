//Program to print second largest element in an array
#include <stdio.h>
#include <limits.h>
int main(){
//	int arr[] = {2,43,65,7,678,9,21};
	int size;
	scanf("%d", &size);
	int arr[size];
	for (int i = 0; i<size; scanf("%d", &arr[i++]));
//	int size = sizeof(arr)/sizeof(arr[0]);
	int max, smax;
	max = smax = INT_MIN;
	for (int i = 0; i<size; i++){
		if(arr[i]>max){
			smax = max;
			max = arr[i];
		}
		else if(arr[i]>smax && max != arr[i])
			smax = arr[i];
	}
	printf("%d", smax);
	return 0;
}