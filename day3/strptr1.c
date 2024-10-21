//Program to demonstrate string
#include <stdio.h>

int main(){
	char ch = 'A';
//	char *str = "A";
	printf("%d %d", sizeof(ch), sizeof("A"));
	return 0;
}