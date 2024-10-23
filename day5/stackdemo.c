//Program to demonstrate stack operations
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Stack{
	int capacity;
	int size;
	char *elements;
}stack;
stack* createStack(int max){
	stack* temp = (stack*)calloc(1, sizeof(stack));
	temp->capacity = max;
	temp->size = -1;
	temp->elements = (char*)calloc(max,sizeof(char));
	return temp;
}
bool isFull(stack *st){
	return st->size+1 == st->capacity;
}
bool isEmpty(stack *st){
	return st->size == -1;
}
bool push(stack* st, char element){
	if (isFull(st))
		return false;	
	st->elements[++st->size] = element;
	return true;	
}
char peek(stack* st){
	if (isEmpty(st))
		return '\0';	
	return st->elements[st->size] ;
}
char pop(stack* st){
	if (isEmpty(st))
		return '\0';	
	return st->elements[st->size--] ;
}
void printStack(stack *st){
	if (isEmpty(st))
		printf("\n[]\n");
	else{
		int i;
		printf("\n[");
		for(i = st->size; i>0; i--)
			printf("%c,", st->elements[i]);
		printf("%c]", st->elements[i]);
	}
}
void printMainMenu(){
	printf("\nStack Operations\n");
	printf("****************\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Peek\n");
	printf("4. Print Stack\n");
	printf("5. Exit\n");
	printf("Enter your choice : ");
}

int main(){
	stack *myStack=NULL;
	int choice, size;
	printf("Stack Size : ");
	scanf("%d", &size);
	myStack = createStack(size);
	while(1){
		printMainMenu();
		scanf("%d", &choice);
		switch(choice){
			default:
				printf("Thank you!..."); return 0;
			case 1:{
				char element;
				printf("Enter an element : ");
				scanf("\n%c", &element);
				if(push(myStack, element))
					printf("Added!...\n");
				else
					printf("Stack is full!\n");
				break;
			}
			case 2:{
				char element = pop(myStack);
				if (element)
					printf("Popped element : %c\n", element);
				else
					printf("Stack is empty!");
				break;
			}
			case 3:{
				char element = peek(myStack);
				if (element)
					printf("Top element : %c\n", element);
				else
					printf("Stack is empty!");
				break;
			}
			case 4:
				printStack(myStack);	
		}
	}
	return 0;
}

Attendance Link : https://bit.ly/WE-221024
Trainer : Tambi
Session : AN

https://tinyurl.com/3e4sh2ch


