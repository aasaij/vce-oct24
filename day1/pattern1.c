//Program to print the following output
//5
//12345		5
// 1234		4
//  123		3
//   12		2
//    1		1
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);    ==> 1
	//Number of rows
	for (int r = n; r>=1; r--){ ==> n 
		printf("%*s", n-r,"");  ==> 1
		for(int c =1; c<=r; c++) ==> r
			printf("%d", c);  ==> r
		printf("\n");==> n 
	}
	return 0;
}