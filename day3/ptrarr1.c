#include <stdio.h>

int main(){
	int arr[] = {10,20,30,40,50,60};
	int *ptr = arr;
	
//	arr = arr+5;
//	printf("%d\n", *ptr);
	ptr = ptr+3;
//	printf("%d\n", *ptr);
	printf("%d\n", ptr[0]);
	printf("%d\n", ptr[-1]);
	printf("%d\n", ptr[-2]);
//	printf("%d", *(arr+2));
	return 0;
}