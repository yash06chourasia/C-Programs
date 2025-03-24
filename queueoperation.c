#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int front=-1;
int rear=-1;
int inqueue();
int dequeue();
int display();
char ch;
int choice;
int queue[MAX];
int main()
{       printf("\n 1.insertion");
		printf("\n 2.deletion");
		printf("\n 3.display");
	do
	{
		printf("\n enter choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				inqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
			    display();
				break;
			default:
			 printf("invalid choice ");
		}
		fflush(stdin);
		printf("\n do you want to continue   ");
		scanf("%c",&ch);
	
	}while((ch=='Y')||(ch=='y'));
	getch();
}
int inqueue()
{
	int item;
	if(rear==MAX-1)
	printf("queue is overflow");
	else
	{ rear++;
	printf("\n enter the element you want to add in the queue  ");
	scanf("%d",&item);
	queue[rear]=item;
	if(front==-1)
	front=0;
	
	}
	
}
int dequeue()
{
	int item;
	if((front==-1)&&(rear==-1))
	  printf(" queue is underflow");
	else
	{
		item=queue[front];
		printf("\n deleted item is %d ",item);
		if(front==rear)
		front=rear=-1;
		else{
			if(front==MAX-1)
			front=-1;
			else
			front++;
		}
	}
}
int display()
{
  int i;
  if((front==-1)&&(rear==-1))
  printf("queue is empty");
  else{
  	for(i=0;i<=rear;i++)
  	{
  		printf("\n %d ",queue[i]);
	  }
  }
}
