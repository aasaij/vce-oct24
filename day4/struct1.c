#include <stdio.h>

int main(){
struct student{
	int rollno;
	int age;
	char name[30];
	double cgpa;
}s1, s2;
printf("%lu", sizeof(s1));
return 0;
}