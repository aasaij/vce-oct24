//Program to demonstrate void* 
#include <stdio.h>

int main(){
	int x=10;
	char c = 'A';
	float f = 10.5;
	void *ptr;
	ptr = &x;
	printf("%d\n", *(int*)ptr);
	ptr = &c;
	printf("%c\n", *(char*)ptr);
	ptr = &f;
	printf("%.2f\n", *(float*)ptr);
	
	return 0;
}