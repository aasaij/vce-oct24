#include <stdio.h>
//Program to print odd numbers upto N in reverse order
int main(){
	int n;   
	scanf("%d", &n);    1
	for (int i = n%2?n:n-1; i>=1; i-=2){  n
			printf("%d ", i); n
	}
	return 0; 1
}
