#include <stdio.h>
void test(int x, int y){
	printf("%d %d", x, y);
}
int main(){
	int x = 10;
//	test(x++,++x);
	printf("%d %d", x++, ++x);
//	printf("\n%d", x);
	return 0;
}