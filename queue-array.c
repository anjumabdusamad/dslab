#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
int isEmpty(){
	return(front==-1 && rear==-1);
}
int isFull(){
	return(rear==MAX-1);
}
void enqueue(int value){
	if(isFull()){
		printf("Queue Overflow! Cannot insert %d\n",value);
	}else{
		if(front==-1)front=0;
		rear++;
		queue[rear]=value;
		printf("%d insert into queue\n",value);
	}
}

void dequeue(){
	if(isEmpty()){
		printf("Queue Underflow! Cannot remove element\n");
	}else{
		printf("%d removed from queue\n",queue[front]);
		if(front==rear){
			front=rear=-1;
		}else{
			front++;
		}
	}
}

void peek(){
	if(isEmpty()){
		printf("Queue is Empty\n");
	}else{
		printf("Front element =%d\n",queue[front]);
	}
}

void display(){
	if(isEmpty()){
		printf("Queue is Empty\n");
	}else{
		printf("Queue Elements :\n");
		for(int i=front;i<=rear;i++){
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}
int main(){
	int choice,value;
	while(1){
		printf("\n---Queue Menu---\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Peek\n");
		printf("4. Display Queue\n");
		printf("5.Exit\n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter value to insert :");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				printf("Exiting.....\n");
				return 0;
			default:
				printf("Invalid choice! Try again\n");
		}
	}
}
