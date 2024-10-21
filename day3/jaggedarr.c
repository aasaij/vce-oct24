//Program to demonstrate jagged array
#include <stdio.h>
#include <stdlib.h>
int main(){
    int **arr;
    int size[] = {5,3,5,2,10};
    int rowSize=5, colSize= 5;
    arr =(int **) calloc(rowSize, sizeof(int*));
    for (int i = 0; i<rowSize; i++){
        arr[i] = (int*)calloc(size[i], sizeof(int));
    }
    
    return 0;
}