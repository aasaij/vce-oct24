#include <stdio.h>
//Program to print odd numbers upto N
int main(){
//	for (int i = 1; i<=10; i++)	
//		printf("Vishnu is sooo cute!");
	int n;
	scanf("%d", &n);
	for (int i = 1; i<=n; i+=2){
//		if (i%2)
			printf("%d ", i);
	}

	return 0;
}