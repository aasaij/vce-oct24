#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr, size=5;

    arr=(int *)calloc(size , sizeof(int));
    arr[0] = 100;
    arr[1] = 200;
    
    arr = realloc(arr, 7 * sizeof(int));
    
    free(arr);
    
    return 0;
}