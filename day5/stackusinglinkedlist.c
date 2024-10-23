//Program to demonstrate Stack using Linked List
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct Node{
	char element;
	struct Node *next;
}node;
typedef struct Stack{
	node* root;
}stack;
stack* createStack(){
	stack *temp = calloc(1, sizeof(stack));
	return temp;
}
node* createNode(char element){
	node* temp = (node*)calloc(1, sizeof(node));
	temp->element = element;
	return temp;
}
bool isEmpty(stack *st){
	return st->root == NULL;
}

bool push(stack *st, char element){
	node* newNode = createNode(element);
	if(newNode){
		newNode->next = st->root;
		st->root = newNode;
		return true;
	}
	return false;
}
node* pop(stack *st){
	if (isEmpty(st))
		return NULL;
	else{
		node* temp = st->root;
		node* copyNode = createNode(temp->element);
		st->root = temp->next;
		free(temp);
		return copyNode;
	}
}
node* peek(stack *st){
	if (isEmpty(st))
		return NULL;
	return st->root;		
}
void printStack(node* list){
	if (list){
		printf("%c ", list->element);
		printStack(list->next);
	}
}
void printStackInReverse(node* list){
	if (list){
		printStackInReverse(list->next);		
		printf("%c ", list->element);
	}	
}
int main(){
	stack* myStack = createStack();
	push(myStack,'A');
	push(myStack,'B');
	push(myStack,'C');
	push(myStack,'D');
//	node *result = pop(myStack);
//	node* result = peek(myStack);
//	printf("%c", result->element);
	printStack(myStack->root);
	printf("\n");
	printStackInReverse(myStack->root);
	
	return 0;
}