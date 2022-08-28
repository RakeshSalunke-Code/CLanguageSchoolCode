#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
}NODE;
void createlist(NODE *head)
{
	int n,count;
	NODE *last,*newnode;
	printf("How many nodes :");
	scanf("%d",&n);
	last=head;
	for(count=1;count<=n;count++)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		newnode->next=NULL;
		printf("\n Enter the node data :");
		scanf("%d",&newnode->info);
		last->next=newnode;
		last=newnode;
	}
}
void insert(NODE *head,int num,int pos)
{
	NODE *newnode,*temp;
	int i;
	for(temp=head,i=1;(temp!=NULL)&&(i<=pos-1);i++)
	temp=temp->next;
	if(temp==NULL)
	{
		printf("\n Position out of range ");
		return;
	}
	newnode=(NODE *)malloc(sizeof(NODE));
	newnode->info=num;
	newnode->next=temp->next;
	temp->next=newnode;
}
void display(NODE *head)
{
	NODE *temp;
	for(temp=head->next;temp!=NULL;temp=temp->next)
	printf("%d\t",temp->info);
}
int search(NODE *head,int num)
{
	NODE *temp;
	int pos;
	for(temp=head->next,pos=1;temp!=NULL;temp=temp->next,pos++)
	{
		if(temp->info==num)
		return pos;
	}
	return -1;
}
void deletepos(NODE *head,int pos)
{
	NODE *temp,*temp1;
	int i;
	for(temp=head,i=1;(temp->next!=NULL)&&(i<=pos-1);i++)
	  temp=temp->next;
	if(temp->next==NULL)
	{
		printf("\nPosition is out of range ");
		return;
	}
	temp1=temp->next;
	temp->next=temp1->next;
	free(temp1);	
}
void deletevalue(NODE *head,int num)
{
	NODE *temp,*temp1;
	for(temp=head;temp->next!=NULL;temp=temp->next)
	{
		if(temp->next->info==num)
		{
			temp1=temp->next;
			temp->next=temp1->next;
			free(temp1);
			return;
		}
	}
	printf("\n Element not found\n");
}
void sort(NODE *head)
{
	NODE *temp,*temp1;
	int num;
	for(temp=head->next;temp->next!=NULL;temp=temp->next)
	{
		for(temp1=temp->next;temp1!=NULL;temp1=temp1->next)
		{
			if(temp->info > temp1->info)
			{
				num=temp->info;
				temp->info=temp1->info;
				temp1->info=num;
			}
		}
	}
}
int count(NODE *head)
{
	NODE *temp;
	int c=0;
	for(temp=head->next;temp!=NULL;temp=temp->next)
	c++;
	return c;
}
void reverse(NODE *head)
{
	NODE *t1,*t2,*t3;
	t1=head->next;
	if(t1==NULL)
	return;
	t2=t1->next;
	if(t2==NULL)
	return;
	t3=t2->next;
	t1->next=NULL;
	while(t3!=NULL)
	{
		t2->next=t1;
		t1=t2;
		t2=t3;
		t3=t3->next;
	}
	t2->next=t1;
	head->next=t2;
}
int main()
{
	NODE *head;
	int choice,n,pos,c;
	head=(NODE *)malloc(sizeof(NODE));
	head->next=NULL;
	do
	{
		printf("\n 1.Create");
		printf("\n 2.Insert");
		printf("\n 3.Delete by value");
		printf("\n 4.Delete by position");
		printf("\n 5.Search");
		printf("\n 6.Display");
		printf("\n 7.Sort");
		printf("\n 8.Count");
		printf("\n 9.reverse");
		printf("\n 0.Exit");
		printf("\n Enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: createlist(head);
				break;
			case 2: printf("\nEnter the element and position :");
				scanf("%d %d",&n,&pos);
				insert(head,n,pos);
				display(head);
				break;
			case 3: printf("\nEnter the element to be deleted:");
				scanf("%d",&n);
				deletevalue(head,n);
				printf("\nData after deleted by value");
				display(head);
				printf("\n");
				break;
			case 4: printf("\nEnter the position to be deleted:");
				scanf("%d",&pos);
				deletepos(head,pos);
				printf("\nData after deleted by position");
				display(head);
				printf("\n");
				break;
			case 5: printf("\nEnter the element to be searched :");
				scanf("%d",&n);
				pos=search(head,n);
				if(pos==-1)
				printf("\n Element not found \n");
				else
				printf("\n %d found at position %d\n",n,pos);
				break;
			case 6: display(head);
				break;
			case 7: printf("\n Sorted elements of linked list are :");
				sort(head);
				display(head);
				printf("\n");
				break;
			case 8: c=count(head);
				printf("\n Total no. of elements of linked list are =%d",c);
				break;
			case 9: printf("\nReversed string is :\n");
				reverse(head);
				display(head);
				break;
			case 0: exit(0);
		}
	}while(choice!=0);
}
