#include <stdio.h>
#include<stdlib.h>
long length(const char str[]){
	long int i;
	for(i=1; str[i];i++);
	return i;
}
char* toggleCase(const char str[]){
	char *temp = (char*)calloc(length(str)+1, sizeof(char))	;
	int i;
	for(i=0;str[i];i++)
		temp[i] = str[i]>='A'&&str[i]<='Z'?str[i]+32:(
			str[i]>='a' && str[i]<='z'?str[i]-32:str[i]
		);
	temp[i] =0;
	return temp;
}

int main(){
	printf("%s", toggleCase("AkAsH")); // aKaSh
	return 0;
}