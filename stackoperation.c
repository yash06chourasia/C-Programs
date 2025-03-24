#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int push();
int pop();
int traverse();
char ch;
int choice;
int stack[MAX];
int main()
{
	do
	{
		printf("\n 1.insertion");
		printf("\n 2.deletion");
		printf("\n 3.traversing");
		printf("\n enter choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
			    traverse();
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
int push()
{
	int item;
	printf("\n enter the element you want to add in the stack   ");
	scanf("%d",&item);
	if(top==MAX-1)
	printf("stack is overflow");
	else
	{ top++;
	stack[top]=item;
	
	}
	
}
int pop()
{
	int item;
	if(top==-1)
	  printf(" stack is underflow");
	else
	{
		item=stack[top];
		printf("\n deleted item is %d ",item);
		top--;
		
	}
}
int traverse()
{
  int i;
  if(top==-1)
  printf("stack is empty");
  else{
  	for(i=top;i>=0;i--)
  	{
  		printf("\n %d ",stack[i]);
	  }
  }
}
