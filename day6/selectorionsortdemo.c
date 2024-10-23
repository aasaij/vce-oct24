//Program to demonstrate bubble sort algorithm
#include <stdio.h>
#include <string.h>

void selectionSort(char names[][30], int size){
	for (int i = 0; i<size; i++){
		int minIndex = i;
		for (int j = i+1; j<size; j++){
			if (strcmp(names[minIndex], names[j])>0)
				minIndex = j;
		}
		if (minIndex != i){
			char temp[30];
			strcpy(temp, names[i]);
			strcpy(names[i], names[minIndex]);
			strcpy(names[minIndex], temp);
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
	char names[][30] = {"Bhavya", "Pragathi", "Shirisha","Nikila", "Neha", "Chanthini"};
	int size = sizeof(names)/sizeof(names[0]);
	selectionSort(names, size);
	printNames(names, size);
	return 0;
}