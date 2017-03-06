#include<stdio.h>
#include<malloc.h>
void insrt();
void delet();
void display();
main()
{
	int n;
	printf("MENU\n");
	printf("1.ENQUEUE \n 2. DEQUEUE \n 3. DISPLAY \n 4.EXIT\n");
	do
	{
		printf("ENTER YOUR CHOICE:\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: insrt();
				break;
			case 2: delet();
				break;
			case 3: display();
				break;
			case 4: printf("invalid choice \n");
				break;
		}
	}while(n!=4);
}
typedef struct node
{
        int data;
        struct node *link;
}n;
n* front=NULL;
n* rear=NULL;
void insrt()
{
	int item;
	n *temp;
	printf("\n ENTER THE ITEM  \n");
	scanf("%d",&item);
	temp=(n*)malloc(sizeof(n));
	temp->data=item;
	temp->link=NULL;
	if(rear==NULL)
	{
		front=temp;
		rear=temp;
	}
	else
	{
		rear->link=temp;
		rear=temp;
	}
}
void delet()
{
	int item;
	if(front==NULL)
	{
		printf("THE QUEUE IS EMPTY \n");
	}
	else
	{
		item=front->data;
		printf("THE ELEMENT IS DELETED =%d\n",item);
	}
	if(front==rear)
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
		front=front+1;
	}
}
void display()
{
	n *ptr;
	if(front==NULL)
	printf("The queue is empty");
	else
	{
		ptr=front;
		printf("THE ELEMENTS OF QUEUE THE ARE:\n");
		while(ptr!=NULL)
		{
			printf("%d\t\n",ptr->data);
			ptr=ptr->link;
		}
	}
} 

