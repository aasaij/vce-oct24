//Program to implement linear search algorithm
#include <stdio.h>
#include <string.h>
//int linearSearch(char list[][30], char search[], int size){
//	for (int i = 0; i<size; i++){
//		if (!strcmp(list[i], search))
//			return i;
//	}
//	return -1;
//}
int linearSearch(char list[][30], char search[], int size){
	if (size>0){
		if (!strcmp(list[size-1], search))
			return size-1;
		linearSearch(list, search,size-1);
	}
	else
		return -1;
}

int main(){
	char nameList[][30] = {"Pruthvi", "Vishnu", "Shashank", "Sandeep", "Rahul", "Anish"};
	int size = sizeof(nameList)/sizeof(nameList[0]);
	char searchName[30];
	scanf("%s", searchName);
	if (linearSearch(nameList, searchName, size)!= -1)
		printf("Found!");
	else
		printf("Not Found!");
	return 0;
}