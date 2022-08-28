#include<stdio.h>
typedef struct node
{
int info, next;
struct node *rear;
}NODE;
NODE *front,  *rear;
void initq()
{
front=rear=NULL;
}
int isempty()
{
return(front==NULL);
}
void addq(int num)
{
NODE *newnode;
newnode=(NODE *)malloc(sizeof(NODE));
newnode->info=num;
newnode->next=NULL;
if(front==NULL)
{
rear=front=newnode;
}
else
{
rear->next=newnode;
rear=newnode;
}
}
int removeq()
{
int num;
NODE *temp=front;
num=front->info;
front=front->next;
free(temp);
if(front==NULL)
rear=NULL;
return(num);
}
void display()
{
NODE *temp;
printf("Queue element are:");
for(temp=front;temp!=NULL;temp=temp->next)
printf("%d\t",temp->info);
}
void main()
{
int choice,num;
initq();
do
{
printf("\n1 add \n2 removeq \n3 display \n4 exit");

printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\n enter the element");
            scanf("%d", &num);
              addq(num);
           break;
case 2:if(isempty())
            printf("\n empty");
           else
            printf("\n the remove element is %d", removeq());
           break;
case 3: if(isempty())
           printf("\n empty");
          else
          display();
          break;
}
}while(choice!=4);
}
