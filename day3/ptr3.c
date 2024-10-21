#include <stdio.h>

int main(){
	int x = 10,y=20, *ptr;
	ptr = &x;
	*ptr = 200;
	printf("%d\n", *ptr);
	ptr = &y;
	*ptr = 100;
	printf("%d\n", y);
	printf("%d\n", *ptr);
	return 0;
}