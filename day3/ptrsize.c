//Size of pointers

#include <stdio.h>
struct student{
	int rollno;
	char name[30];
	double cgpa;
};
int main(){
	printf("%lu\n", sizeof(int*));
	printf("%lu\n", sizeof(char*));
	printf("%lu\n", sizeof(float*));
	printf("%lu\n", sizeof(double*));
	printf("%lu\n", sizeof(struct student*));
	return 0;
}

Assessment : student.ccc.training

Attendance Link : https://bit.ly/SA-191024
Trainer : Tambi
Session : FN
