//Program to check balanced parenthesis
#include <stdio.h>

int main(){
	char str[100], st[100];
	int i, j;
	scanf("%s", str);	
	for(i = 0,j=-1; str[i]; i++){
		if (str[i]=='{'|| str[i]=='['|| str[i]=='(')
			st[++j]= str[i];
		else if (!((str[i]=='}' && st[j]=='{') || (str[i]==']' && st[j]=='[')||(str[i]==')' && st[j]=='(')))
				break;
		else
			j--;
	}
	if (!str[i])
		printf("Yes");
	else
		printf("No");
	return 0;
}