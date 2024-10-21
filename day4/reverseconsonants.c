//input : education@123
//output :enutaciod@123
//Program to reverse consonants of given string
#include <stdio.h>
#include <stdbool.h>
#include<string.h>
#include<ctype.h>
bool isVowel(char ch){
	return strchr("AEIOUaeiou", ch)!=NULL;
}
bool isConsonant(char ch){
	return isalpha(ch) && !isVowel(ch);
}
void reverseConsonant(char str[], int len){
//	char *temp = (char*)calloc(len+1, sizeof(char));
	for(int i =0, j=len-1; i<j; i++, j--){
		if (isConsonant(str[i]) && isConsonant(str[j])){
			str[i] = str[i]+str[j] - (str[j]=str[i]);
		}
		else if(isConsonant(str[i])) i--;
		else if (isConsonant(str[j])) j++;
	}
}
int main(){
	char str[100];
	int len;
	scanf("%s%n", &str, &len);
	reverseConsonant(str, len);
	printf("%s",str);
	return 0;
}
