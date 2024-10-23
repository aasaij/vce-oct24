//Program to demonstrate circular queue
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct Queue{
	int capacity;
	int front;
	int rear;
	char *elements;
}queue;
queue* createQueue(int size){
	queue* temp = (queue*)calloc(1, sizeof(queue));
	temp->capacity = size;
	temp->front = -1; //queue is empty
	temp->rear = -1;
	temp->elements = (char*)calloc(size, sizeof(char));
	return temp;
}
bool isEmpty(queue *q){
	return q->front == -1 && q->rear == -1;
}
bool isFull(queue* q){
	return (q->rear+1 == q->capacity && q->front == 0) || q->rear+1 == q->front;
}
bool enqueue(queue*q, char element){
	if (isFull(q))
		return false;
	if(q->front==-1)
		q->front = 0;
	q->rear = (q->rear + 1) % q->capacity;
	q->elements[q->rear] = element;
	return true;	
}
bool dequeue(queue* q){
	if (isEmpty(q))
		return false;
	if(q->front==q->rear)
		q->front = q->rear = -1;
	else{
		q->front = (q->front+ 1) % q->capacity;
	}
	return true;
}
char* front(queue *q){
	if (isEmpty(q))
		return NULL;
	else
		return &q->elements[q->front];
}
void printQueue(queue *q){
	if (isEmpty(q))	
		printf("\n[]\n");
	else{
		printf("\n[");
		for (int i = q->front; i!= q->rear;){			
			printf("%c,",q->elements[i]);
			i = (i+1) % q->capacity;
		}
		printf("%c]\n", q->elements[q->rear]);
	}
}
void printMainMenu(){
	printf("\nQueue Operations\n");
	printf("****************\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Front element\n");
	printf("4. Print Queue\n");
	printf("5. Exit\n");
	printf("Enter your choice : ");
}
int main(){
	queue *myQueue = NULL;
	int size, choice;
	printf("Queue Size : ");
	scanf("%d", &size);
	myQueue = createQueue(size);
	while(1){
		printMainMenu();
		scanf("%d", &choice);
		switch(choice){
			default:
				printf("Thank you...!");
				exit(0);
			case 1:{
				char element;
				printf("Enter an element : ");
				scanf("\n%c", &element);
				if(enqueue(myQueue, element))
					printf("Enqueued...!\n");
				else
					printf("Queue is full!\n");
				break;
			}
			case 2:
				printf("%s\n", dequeue(myQueue)?"Dequeued...!":"Queue is Empty!");
				break;
			case 3:
				{
					char *element = front(myQueue);
					if(element)
						printf("%c\n", *element);
					else
						printf("Queue is empty\n");
				}
				break;
			case 4:
				printQueue(myQueue);
		}
	}
	return 0;
}

Attendance Link : https://bit.ly/AA-231024
Trainer : Tambi
Session : AN


Test Link : https://tinyurl.com/ynp83e8j

Time : 3.20 to 4.20






