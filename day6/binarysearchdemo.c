//Program to implement binary search algorithm
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *x, const void *y){
	return  strcmp((char*)x, (char*)y);
}
int binarySearch(char list[][30], char search[],int lb, int ub){
	if (lb<=ub){
		int middle = (lb + ub) / 2;
		int cmp = strcmp(search, list[middle]);
		if (cmp == 0)
			return middle;
		else if (cmp > 0)
			binarySearch(list, search, middle+1, ub);
		else
			binarySearch(list, search, lb, middle-1);
	}
	else
		return -1;
}
//int binarySearch(char list[][30], char search[],int size){
//	int lb = 0, ub = size-1;
//	while (lb <= ub)	{	
//		int middle = (lb + ub) / 2;
//		int cmp = strcmp(search, list[middle]);
//		if (cmp == 0)
//			return middle;
//		else if (cmp > 0)
//			lb = middle + 1;
//		else
//			ub = middle - 1;
//	}
//	return -1;
//}

int main(){
	char nameList[][30] = {"Pruthvi", "Vishnu", "Shashank", "Sandeep", "Rahul", "Anish"};
	int size = sizeof(nameList)/sizeof(nameList[0]);
	qsort(nameList, size, sizeof(nameList[0]),compare);

	char searchName[30];
	scanf("%s", searchName);
//	if (binarySearch(nameList, searchName, size)!= -1)
	if (binarySearch(nameList, searchName, 0,size-1)!= -1)
		printf("Found!");
	else
		printf("Not Found!");
	return 0;
}