#include <stdio.h>

int main(){
	int x = 10;
	printf("%d\n", x);
	*(&x) = 200;
	printf("%d\n", *(&x));
	printf("%p\n", &x);	
	return 0;
}