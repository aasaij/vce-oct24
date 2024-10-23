//Program to implement circular linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	char element;
	struct Node *next;
}node;
node* createNode(char element){
	node* temp = (node*)calloc(1, sizeof(node));
	temp->element = element;
	return temp;	
}
node* addFirst(node* tail, char element){
	node* newNode = createNode(element);
	if (!tail){
		newNode->next = newNode;
		return newNode;
	}
	newNode->next = tail->next;
	tail->next = newNode;
	return tail;
}

void printList(node* tail){
	if(tail){
		printf("\n[");
		for (node *t = tail->next;t!=tail; t=t->next)
			printf("%c,",t->element);
		printf("%c]", tail->element);
	}
	else
		printf("\n[]\n");
}
int main(){
	node* tail = NULL;
	tail = addFirst(tail,'B');
	tail = addFirst(tail, 'A');
	printList(tail);
	return 0;
}