//Akash
//Akash
//Akas
//Aka
//Ak
//A
#include <stdio.h>

int main(){
	char str[100];
	int len;
	scanf("%s%n",str, &len);
	for (int i = len; i>=1; i--)
		printf("%-*.*s%*.*s\n", len,i, str,len,i, str);
	
//	printf("%*.*s", 20,10,"Karthik is sooo cute!");
//	printf("%-*.*s\n", 7, 7, "Karthik");
//	printf("%-*.*s\n", 7, 6, "Karthik");
//	printf("%-*.*s\n", 7, 5, "Karthik");
//	printf("%-*.*s\n", 7, 4, "Karthik");
//	printf("%-*.*s\n", 7, 3, "Karthik");
//	printf("%-*.*s\n", 7, 2, "Karthik");
//	printf("%-*.*s\n", 7, 1, "Karthik");
	return 0;
}