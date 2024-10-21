#include <stdio.h>

int main(){
	char str1[] = "Ganesh";
	char *str2 = "Pruthvi";
	printf("%p\n", str2);
//	printf("%p\n", str1);
//	str1[0] = 'K';
//	printf("%p\n", str1);
//	puts(str1);
//	str2[0] = 'M';
	str2 = "Akash";
	printf("%p\n", str2);
	puts(str2);
	return 0;
}