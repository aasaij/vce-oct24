#include <stdio.h>

int main(){
	int y = 10;
	static  int x = y;	
	if (x == y)
		printf("You are all very active in the class");
	else
		printf("You are all very responsive in the class");
	return 0;
}