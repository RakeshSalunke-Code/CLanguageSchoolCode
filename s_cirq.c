#include<stdio.h>
#define MAX 10
typedef struct
{
int data[MAX]
int front, rear;
}QUEUE;
void initq(QUEUE *pq)
{
rear=NULL;
}
int isempty()
{
return(rear==NULL);
}
void addq(int num)
{
NODE *newnode;

