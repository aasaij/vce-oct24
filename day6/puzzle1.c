#include <stdio.h>
void start(void) __attribute__((constructor));
void thank(void) __attribute__((destructor));

void start(){
	printf("\nGood Morning Engineers!\n");
}
void thank(){
	printf("\nThank you so much for being very very interactive!");
}

int main(){
	printf("\nThis is main()\n");
		
	return 0;
}