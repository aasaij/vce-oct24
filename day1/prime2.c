//Program to check whether the given number is prime or not
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if ( n == 1)
		printf("Neither prime nor composite");
	else if(n > 3 && ( n % 2 == 0 || n % 3 == 0))
		printf("Not prime");
	else{
		for (int i = 5; i*i<=n; i+=6){
			if (n%i == 0 || n%(i+2)==0){
				printf("Not prime");
				return 0;
			}			
		}
		printf("prime");		
	}	
	return 0;
}

//
//17 ==> 6 x 3 - 1
//37 ==> 6 x 6 + 1
//
//25 ==> 6 x 4 + 1