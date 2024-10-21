#include <stdio.h>
#include <stdlib.h>
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("Max : %d\t Min: %d\n",
		((x+y)+abs(x-y))/2, ((x+y)-abs(x-y))/2
	);
	return 0;
}