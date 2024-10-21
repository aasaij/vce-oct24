//Program to demonstrate the singly linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	char element;
	struct Node *next;
}node;
node* createNode(char data){
	node* temp = (node*)calloc(1, sizeof(node));
	temp->element = data;
	return temp;
}
node* addFirst(node* list, char data){
	node* newNode = createNode(data);
	newNode->next= list;
	list = newNode;
	return list;
}

node* addLast(node* list, char data){
	node* newNode = createNode(data);
	if(list){
		node* temp = list;
		while(temp->next) temp= temp->next;			
		temp->next = newNode;
		return list;
	}
	return newNode;
	
}

node* addAt(node* list, char data, int position){
	if(position==0||position ==1)
		return addFirst(list,data);
	node* temp = list;
	for(int i=2;i<position&&temp;i++){
		temp = temp->next;
	}	
	if(temp){
		node* newNode = createNode(data);
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return list;
}
	
//void printList(node* list){
//	if(list){
//		node *temp;
//		printf("\n[");
//		for(temp=list;temp->next;temp= temp->next){
//			printf("%c,",temp->element);
//		}
//		printf("%c]\n",temp->element);
//	}
//	else
//		printf("[]\n");
//}	
void printList(node* list){
	if(list){
		printf("%c ", list->element);
		printList(list->next);
	}
	else
		printf("\n");
}

node* deleteFirst(node* list){
	if(list){
		node* temp =list;
		list = temp->next;
		free(temp);
	}
	return list;
}

node* deleteLast(node* list){
	if(list){
		node* temp = list;
		if(!temp->next){
			free(temp);	
			return NULL;
		}
		while(temp->next->next) temp = temp->next;
		free(temp->next);
		temp->next = NULL;
	}
	return list; 	
}

node* deleteNode(node* list, int position) {
	//if list doesnt exist:
	if(!list) {
		return NULL;
	}
	//if first node
	node* temp = list;
	if(position == 1) {
		list = list -> next;
		free(temp);
		return list;
	}
	
	node* prev = list;
	int count = 1;
	
	while(count < position) {
		prev = temp;
		temp = temp -> next;
		count++;
	}
	
	prev -> next = temp -> next;
	free(temp);
	return list;
}
node* deleteAt(node *list, int position){
	if (list){
		if (position==0 || position == 1)
			return deleteFirst(list);
		node *temp;
		for (int i = 2; i<position && temp; i++) temp =temp->next;
		if(temp){
			node *t = temp->next;
			temp->next = t->next;
			free(t);
		}
		return list;
	}
}
void mainMenu(){
	printf("Singly Linked List Operations\n");
	printf("*****************************\n");
	printf("1. Add First\n");
	printf("2. Add Last\n");
	printf("3. Add at Position\n");
	printf("4. Delete First\n");
	printf("5. Delete Last\n");
	printf("6. Delete at position\n");
	printf("7. Print list\n");
	printf("8. Exit\n");
	printf("Enter your choice : ");
}
char getElement(){
	char ch;
	printf("Enter an element : ");
	scanf("\n%c", &ch);
	return ch;
}
int getPosition(){
	int loc;
	printf("Enter location : ");
	scanf("%d", &loc);
	return loc;
}

int main(){
	node *root = NULL;
	int choice;
	while(1){
		mainMenu();
		scanf("%d", &choice);
		switch(choice){
			default:
				printf("Thank you!...");
				return 0;
			case 1:
				root = addFirst(root, getElement());
				break;
			case 2:
				root = addLast(root, getElement());
				break;
			case 3:
				root = addAt(root, getElement(),getPosition());
				break;
			case 4:
				root = deleteFirst(root);
				break;
			case 5:
				root = deleteLast(root); break;
			case 6:
				root = deleteAt(root,getPosition()); break;
			case 7:
				printList(root);				
		}		
	}
	return 0;
}