#include <stdio.h>

int main(){
struct student{
	int x:4;
	int y:3;
	int z: 2;	
};
struct student f = {10,7,2};
struct student *ptr = &f;

printf("%d %d %d",ptr->x, (*ptr).y,ptr->z);
return 0;
}

Attendance Link : https://bit.ly/SA-211024
Trainer : Tambi
Session : FN
