#include<stdio.h>
#include<stdlib.h>
#define null 0


typedef struct node{
	int data;
	struct node *next,*prev;
}node;

node *temp,*ttemp,*first,*p,*q,*r,*s;

void createfirst(int n)
{
	first=(node*)malloc(sizeof(node));
	first->data=n;
	first->prev=null;
	first->next=null;
}

void addnode(int n)
{
	temp=first;
	while(temp->next!=null)
	{
		temp=temp->next;
	}
	ttemp=(node*)malloc(sizeof(node));
	ttemp->data=n;
	ttemp->next=null;
	ttemp->prev=temp;
}

void display(){
	temp=first;

	while(temp->next!=null)
	{
		printf("\n%d ",temp->data);
		temp=temp->next;
	}
}





int main()
{int val;
printf("\n enter data for first node :  ");
scanf("%d",&val);
createfirst(val);
for(;;){
	printf("enter data for next node : ");
	scanf("%d",&val);
	if(val==0)
	  break;
	else
	  addnode(val);
}
printf("\n THE ELEMENTS OF LIST ARE : ");
display();
}
