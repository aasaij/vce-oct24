#include <stdio.h>

int main(){
	int x = 10, *ptr;
	
	*ptr = 200;
	x++;
	printf("%d\n", x);
	printf("%d\n", *ptr);
	printf("%p\n", ptr);
	printf("%p\n", &ptr);
	return 0;
}