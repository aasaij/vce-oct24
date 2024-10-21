//Program to add two matrices
#include <stdio.h>
int main(){
	int rSize, cSize;
	scanf("%d x %d", &rSize, &cSize); // 5 x 4
	int a[rSize][cSize], b[rSize][cSize], c[rSize][cSize];
	//Getting values for matrix A
	for (int r=0; r<rSize; r++)
		for (int c = 0;c<cSize; scanf("%d", &a[r][c++]));
	for (int r=0; r<rSize; r++)
		for (int c = 0;c<cSize; scanf("%d", &b[r][c++]));
	for (int i = 0; i<rSize; i++)
		for (int j = 0; j<cSize;c[i][j]= a[i][j]+b[i][j],j++);
	for (int i = 0; i<rSize;printf("\n"), i++)
		for (int j = 0; j<cSize; printf("%3d",c[i][j++]));
	return 0;
}