#include <stdio.h>
char* getChar(){
	char element;
	scanf("%c", &element);
	return &element;
}

int main(){
	printf("%c", *getChar());
	return 0;
}