#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;

void push(int value){
	if (top==MAX-1){
		printf("Stack Overflow Cannot push %d\n",value);
	}else{
		top++;
		stack[top]=value;
		printf("%d Pushed into stack\n",value);
	}
}
int pop(){
	if (top==-1){
                printf("Stack Underflow Cannot pop\n");
        }else{
               printf("%d poped\n",stack[top]);
	       stack[top--];
        }
}

void display(){
	if(top==-1){
		printf("Stack is empty\n");
	}else{
		printf("Stack elements :");
		for(int i=top;i>=0;i--){
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}
int main(){
	int choice,value;
	while(1){
		printf("\n---Stack Menu---\n");
		printf("1.PUSH\n");
		printf("2.POP\n");
		printf("3.DISPLAY\n");
		printf("4.EXIT\n");
		printf("Enter your Choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the value to push :");
				scanf("%d",&value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exiting...\n");
				return 0;
			default:
				printf("Invalid choice!\n");
		}
	}
}


