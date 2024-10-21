//Program to print natural numbers using recursion
#include <stdio.h>
void printNatural(int n){
	if (n==1){
		printf("%d", n);
		return;
	}
	else{
		printNatural(n-1);
		printf("%d ", n);		
	}	
}
int main(){
	int n;
	scanf("%d", &n);
	printNatural(n);
	return 0;
}

Attendance Link : https://bit.ly/SA-211024
Trainer : Tambi
Session : AN
