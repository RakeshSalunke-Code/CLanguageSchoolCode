#include<stdio.h>
typedef struct node
{
int coef, exp;
struct node * next;
}poly;
void create(poly *head)
{
poly *temp=head, *newnode;
int i,n;
printf("\n how many terms?");
scanf("%d",&n);
printf("\n enter the terms in descending order of power:\n");
for(i=1; i<n;i++)
{
newnode=(poly*)malloc (sizeof(poly));

newnode->next=NULL;;
printf("\n coeff=:");
scanf("%d ",&newnode->coef);
printf("\n exponent=:");
scanf("%d",&newnode->exp);
temp->next=newnode;
temp=newnode;
}
}


void display(poly *head)
{
poly *temp;
for( temp=head->next; temp!=NULL; temp=temp->next)
printf("<%dx^%d>+",temp->coef,temp->exp);
printf("\b\n");
}
void add(poly *p1,poly *p2,poly *p3)
{
poly *t1=p1->next,*t2=p2->next,*t3=p3, *newnode;
int i;
while(t1!=NULL && t2!= NULL)
{
newnode=(poly *) malloc(sizeof(poly));
newnode->next=NULL;
if(t1->exp> t2->exp)
{
newnode-> exp=t1->exp;
newnode->coef=t1->coef;
t1=t1->next;
}
else
if(t1->exp<t2->exp)
{
newnode->exp=t2->exp;
newnode->coef=t2->coef;
t2=t2->next;
}
else
{
newnode->exp=t1->exp;
newnode->coef=t1->coef+t2->coef;
t1=t1->next;
t2=t2->next;
}
t3->next=newnode;
t3=newnode;
}
while(t1)
{
newnode=(poly *)malloc (sizeof(poly));
newnode->next=NULL;
newnode->exp=t1->exp;
newnode->coef=t1->coef;
t3->next=newnode;
t3=newnode;
t1=t1->next;
}

while(t2)
{
newnode=(poly *)malloc (sizeof(poly));
newnode->next=NULL;
newnode->exp=t2->exp;
newnode->coef=t2->coef;
t3->next=newnode;
t3=newnode;
t2=t2->next;
}
}
void main()
{
poly *p1, *p2,*p3;
int n;
p1=(poly *)malloc(sizeof(poly));
p1->next=NULL;
p2=(poly *)malloc(sizeof(poly));
p2->next=NULL;
p3=(poly *)malloc(sizeof(poly));
p3->next=NULL;
create(p1);
display(p1);
create(p2);
display(p2);
add(p1,p2,p3);
printf("\n the addition is :");
display(p3);
}
