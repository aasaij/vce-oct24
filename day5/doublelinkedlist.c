//Program to implement doubly linked list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Employee{
	int id;
	char name[30];
	double salary;
}employee;

typedef struct Node {
	employee emp;
	struct Node *prev;
	struct Node *next;
}node;
node* createNode(employee e){
	node* temp = calloc(1, sizeof(node));
	temp->emp.id = e.id;
	strcpy(temp->emp.name,e.name);
	temp->emp.salary = e.salary;
	return temp;
}
node* addFirst(node* list, employee element){	
	node* newNode = createNode(element);
	if(!list) return newNode;
	newNode->next = list;
	list->prev = newNode;
	list = newNode;
	return list;
}
node * addLast(node *list,employee element){
	node* newNode = createNode(element);
	if(!list) return newNode;
	node *temp;
	for(temp=list;temp->next;temp=temp->next);
	newNode->prev=temp;
	temp->next=newNode;
	return list;
}
void printList(node *list){
	if(list) {
		printf("\n[");
		node *t;
		for(t = list; t->next;t=t->next)
			printf("[%d,%s,%.2lf],", t->emp.id, t->emp.name, t->emp.salary);
		printf("[%d,%s,%.2lf]]\n", t->emp.id, t->emp.name, t->emp.salary);					
	}
	else 
		printf("\n[]\n");
}
node* deleteLast(node* list){
	if(list){
		node *t, *temp;
		for (t = list; t->next; t=t->next);
		if (t->prev){
			temp = t->prev;
			temp->next = NULL;
		}
		else
			list = NULL;
		free(t);
	}
	return list;
}

int main(){
	node* root = NULL;
	employee e = {101, "Pruthvi", 500000};
	root = addFirst(root, e);
	employee e1 = {102, "Rahul", 700000};
	root = addFirst(root,e1 );
	root = addLast(root, e1);
	root = deleteLast(root);
	printList(root);
	root = deleteLast(root);
	printList(root);
	root = deleteLast(root);
	printList(root);
	return 0;
}

