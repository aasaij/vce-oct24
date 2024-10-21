#include <stdio.h>

int main(){
	int x = 10;
//	int arr[x] = {1,2,3,4,65,7}; --> Invalid
	int arr[x];
	arr[1] = 100;
	arr[2] = 300;
	arr[x-1] = 700;
	printf("%d", arr[x-1]);
	
	return 0;
}