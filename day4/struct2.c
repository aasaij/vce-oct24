//Program to demonstrate structure pointer

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Student{
	int rollno;
	char name[30];
	double cgpa;
}student;
int main(){
	student *st;
	st = (student*)malloc(sizeof(student));
	st->rollno = 101;
	strcpy(st->name, "Ganesh");
	st->cgpa = 10.0;
	printf("%d %s %.2lf\n", st->rollno, st->name, st->cgpa);
	return 0;
}