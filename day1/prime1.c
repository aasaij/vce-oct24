//Program to check whether the given number is prime or not
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 2; i<=n-1; i++){
		if ( n % i == 0){
			printf("Not Prime");
			return 0;
		}
	}
	printf("prime");	
	return 0;
}

//
//17 ==> 6 x 3 - 1
//37 ==> 6 x 6 + 1
//
//25 ==> 6 x 4 + 1