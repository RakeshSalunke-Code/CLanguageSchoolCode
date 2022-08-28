#include<stdio.h>
typedef struct node
{
int info;
struct node *prev, *next;
}NODE;
void createlist(NODE  *head)
{
int n, count;
NODE *last, *newnode;
printf("how many nodes.");
scanf("%d",&n);
last=head;
for(count=1;count<=n;count++)
{
newnode=(NODE  *)malloc(sizeof(NODE));
newnode->next=head;

printf("\n enter the node data:");
scanf("%d",&newnode->info);
last->next=newnode;

last=newnode;
}
}
//----=----------------------------------------------------------------------
void display(NODE *head)
{
NODE * temp;
for(temp=head->next; temp!=NULL;temp=temp->next)
printf("%d\t",temp->info);
}
