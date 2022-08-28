#include<stdio.h>
typedef struct node
{
int info;
struct node *next;
}NODE;
NODE *top;
void initstack()
{
top=NULL;
}
int isempty()
{
if(top==NULL)
return 1;
else
return 0;
}
void push(int num)
{
NODE *newnode;
newnode=(NODE *)malloc(sizeof(NODE));
newnode->info=num;
newnode->next=top;
top=newnode;
}
void display()
{
NODE * temp;
for(temp=top; temp!=NULL; temp=temp->next)
printf("%d\t", temp->info);
}int pop()
{
int num;
NODE *  temp=top;
num=top->info;
top=top->next;
free(temp);
return num;
}
void main()
{
int choice,n;
initstack();
do
{
printf("\n1 push \n2 pop  \n3display  \n0 exit\n");
printf("\n enter your chioce");
scanf("%d", & choice);
switch(choice)
{
case 1: printf("\n enter the element to be pused");
              scanf("%d",&n);
             push(n);
              break;
case 2: if(isempty())
             printf("\n stack is empty");
              else
             printf("\n popped element %d ", pop());
             break;
case 3:
             if(isempty())
             printf("\n stack is empty is empty");
             else
             display();
             break;
case 0: exit(0);
}
}
while(choice !=0);
}
