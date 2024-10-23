//Program to demonstrate bubble sort algorithm
#include <stdio.h>
#include <string.h>
void bubbleSort(char names[][30], int size){
	for (int i = 1; i<=size; i++){
		for (int j = 0; j<size-i; j++)
			if (strcmp(names[j], names[j+1])>0){
				char temp[30];
				strcpy(temp, names[j]);
				strcpy(names[j], names[j+1]);
				strcpy(names[j+1], temp);
			}
	}	
}
void printNames(char list[][30], int size){
	printf("\n[");
	for (int i = 0; i<size-1; i++)
		printf("%s,",list[i]);
	printf("%s]", list[size-1]);
}

int main(){
	char names[][30] = {"Sravya", "Harshitha","Neha", "Akhil", "Bhavya"};
	int size = sizeof(names)/sizeof(names[0]);
	bubbleSort(names, size);
	printNames(names, size);
	return 0;
}