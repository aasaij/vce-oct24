//Program to implement linear search algorithm
#include <stdio.h>
#include <string.h>

int main(){
	char *nameList[30] = {"Pruthvi", "Vishnu", "Shashank", "Sandeep", "Rahul", "Anish"};
	int size = sizeof(nameList)/sizeof(nameList[0]);
	printf("%d", size);
	return 0;
}