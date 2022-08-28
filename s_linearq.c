#include<stdio.h>
#define MAXSIZE 10
typedef struct
{
int data[MAXSIZE];
int front ,rear;
}QUEUE;
void initq(QUEUE *pq)
{
pq->front=pq->rear=-1;
}
void addq(QUEUE *pq , int num)
{
pq->rear++;
pq->data[pq->rear]=num;
}
int removeq(QUEUE *pq)
{
int num;
pq->front++;
num=pq->data[pq->front];
return(num);
}
int isempty(QUEUE *pq)
{
return(pq->front==pq->rear);
}
int isfull(QUEUE *pq)
{
return (pq->rear==MAXSIZE-1);
}
void display(QUEUE *pq)
{
int i;
printf("queue element are:");
for(i=pq->front+1; i<pq->rear+1;i++)
printf("%d\t",pq->data[i]);
}
void main()
{
int n,choice;
QUEUE q1;
initq(&q1);
do
{
printf("\n1 add \n2 delete \n3display\n4exit");
printf("\n enter choice");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("enter elemnet");
scanf("%d",&n);
if(isfull(&q1))
printf("Queue overflow");
else
addq(&q1,n);
break;
case 2: if (isempty(&q1))
             printf("\n queue is empty");
            else
             printf("\n deleted element is %d",removeq(&q1));
            break;
case 3: if(isempty(&q1))
              printf("Queue is empty");
             else
             display(&q1);
            break;
}
}while(choice!=4);
}
