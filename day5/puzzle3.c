#include <stdio.h>

int main(){
	const int x = 10;
	int *ptr;
	ptr = &x;
	*ptr = 100;
	printf("%d", x);
	return 0;
}