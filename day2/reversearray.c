//Program to reverse an array
#include <stdio.h>
void reverseArray(int arr[], int n){
	for (int i = 0, j=n-1;i<j;i++, j--)
		arr[i] = (arr[i]+arr[j])-(arr[j]=arr[i]);
}
void printArray(int arr[], int n){
	printf("\n[");
	for(int i = 0;i<n-1; i++)
		printf("%d,", arr[i]);
	printf("%d]\n", arr[n-1]);
}
int main(){
	int arr[] = {10,20,30,40,50,10,20,30,123};
	int size = sizeof(arr)/ sizeof(arr[0]);
	printArray(arr, size);
	reverseArray(arr, size);
	printArray(arr, size);
	return 0;
}

//Attendance Link : https://bit.ly/MA-181024
//Trainer : Tambi
//Session : FN



