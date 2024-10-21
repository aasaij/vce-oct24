//Program to demonstrate two dimensional array using pointer to pointer
#include <stdio.h>
#include <stdlib.h>
int main(){
	int **arr;
	int rowSize, colSize;
	scanf("%d %d", &rowSize, &colSize);
	arr =(int **) calloc(rowSize, sizeof(int*));
	for (int i = 0; i<rowSize; i++){
		arr[i] = (int*)calloc(colSize, sizeof(int));
	}
	arr[0][0] = 100;
	arr[rowSize-1][colSize-1] = 900;
	printf("%d", arr[0][0]);
	free(arr);
	return 0;
}