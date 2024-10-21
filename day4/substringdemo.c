#include <stdio.h>
#include <stdlib.h>
int main(){
	//function proto-type or function declaration
	char* substring(const char[], int, int);
	printf("%s", substring("This is testing",11,3)); //Ga
	return 0;
}
//function definion
char *substring(const char str[],int startIndex, int numChars){
	char *temp;
	int i,j;
	temp = (char*)calloc(numChars+1, sizeof(char));
	for (i = startIndex, j=0; i<numChars+startIndex && str[i]!='\0';i++, j++)
		temp[j] = str[i];
	temp[j]='\0';	
	return temp;
}




