//Program to arrange all 0's into right side in binary array
#include <stdio.h>

int main(){
//	int arr[] = {1,0,1,0,1,1,0,0,1};
//	int arr[] = {1,1,1,1,1,1,1,1,1};
	int arr[] = {0,0,0,0,0,0,0,0,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0,j = size-1; i<j; i++, j--){
		while(arr[i]==1 && i < j) i++;
		while(arr[j]==0 && j > i) j--;
		if (i<j)
			arr[i] = arr[i]+arr[j] - (arr[j]=arr[i]);
	}
	for (int i = 0; i<size; printf("%d ", arr[i++]));
	return 0;
}

//Attendance Link : https://bit.ly/MA-181024
//Trainer : Tambi
//Session : AN