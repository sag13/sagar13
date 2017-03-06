#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int val,num;
struct node
{
	int data;
	struct node *next;
}*top,*start,*newnode,*ptr;
typedef struct node node;
void push();
void pop();
void disp();
main()
{
	int opt;
	printf("MENU\n");
	printf(" 1. PUSH \n 2. POP \n 3.DISPLAY \n  4.EXIT \n");
	do
	{
		printf("enter you choice\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1 :push();
				break;
			case 2 :pop();
				break;
			case 3 :disp();
				break;
			case 4 :printf("invalid choice\n");
		}
	}while(opt!=4);
}
void push()
{
	newnode=(node*)malloc(sizeof(node*));
	printf("enter the data \n");
	scanf("%d",&val);
	if(top==NULL)
	{
		newnode->data=val;
		newnode->next=NULL;
		top=newnode;
	}
	else
	{
		newnode->data=val;
		newnode->next=top;
		top=newnode;
	}
}
void pop()
{
	ptr=top;
	if(top==NULL)
	{
		printf("under flow\n");
	}
	else
	{
		top=top->next;
		free(ptr);
	}
}
void disp()
{
	int i;
	ptr=top;
	while(ptr->next!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("%d\t",ptr->data);
}
 
