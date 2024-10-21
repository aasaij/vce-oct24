//Program to demonstrate array & pointer
#include <stdio.h>

int main(){
	int arr[5];
	//Getting array elements
	for (int i = 0; i<5; i++)
		scanf("%d", arr+i);
	//printing array elements
	for (int i = 0;i<5; i++)
		printf("%d ", *(arr+i));
}