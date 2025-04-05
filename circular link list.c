#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *first,*temp,*ttemp,*p,*q,*r,*s,*t;

void createfirst(int val){
	first=(node*)malloc(sizeof(node));
	first->data=val;
	first->next=first;
	}
	
void addnode(int val){
	temp=first;
	while(temp->next!=first)
	{
		temp=temp->next;
	}
	ttemp=(node*)malloc(sizeof(node));
	ttemp->data=val;
	ttemp->next=first;
	temp->next=ttemp;
}

void display(){
	temp=first;
	do{
		printf("\n%d ",temp->data);
		temp=temp->next;
	}while(temp!=first);
}
void deletelast()
{
	temp=first;
	while(temp->next!=first)
	{
		ttemp=temp;
		temp=temp->next;
	}
	ttemp->next=first;
	temp->next=NULL;
	free(temp);
}
void deletefirst()
{temp=ttemp=first;
p=first->next;
while(temp->next!=first)
{
	temp=temp->next;
}
temp->next=p;
ttemp->next=NULL;
free(ttemp);
first=p;
}
 
 
 void swap1st2nd(){
 	temp=ttemp=first;
 	p=first->next;
 	q=p->next;
 	while(temp->next!=first)
	 {
 		temp=temp->next;
	 }
	 ttemp->next=q;
	 p->next=ttemp;
	 temp->next=p;
	 first=p;
 }
 
 void swapfirstlast()
 { temp=first;
 while(temp->next!=first)
 {
 	ttemp=temp;
 	temp=temp->next;
 }
 p=first;
 q=p->next;
 temp->next=q;
 ttemp->next=p;
 p->next=temp;
 first=temp;
 }
 
 void swaplast2ndlast(){
 	temp=first;
 	while(temp->next->next!=first)
 	{ ttemp=temp;
 	temp=temp->next;
	 }
	 r=temp->next;
	 r->next=temp;
	 ttemp->next=r;
	 temp->next=p;
	 
 }

int main()
{
int n;
char i;
printf("\nenter the data of first node ");
 scanf("%d",&n);
 createfirst(n);
while(1){
printf("\nenter data for the next node ");
 scanf("%d",&n);
 /*printf("\n do you want to continue :");
   scanf("%c",&i);*/
 if(n==0)
  break;
 else 
 addnode(n);
 
 }
 display();
 deletelast();
 printf("\n");
 display();
 deletefirst();
 printf("\n");
 display();
 swaplast2ndlast();
 printf("\n");
 display();
}
