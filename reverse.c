#include<stdio.h>
#define MAXSIZE 20
typedef struct
{
  int data [MAXSIZE];
  int top;
}STACK;
void initstack(STACK *ps)
{
ps->top=-1;
}
int isempty(STACK *ps)
{
return(ps->top==-1);
}
int isfull(STACK *ps)
{
return(ps->top==MAXSIZE-1);
}
void push(STACK *ps, int n)
{
ps->data [++ps->top]=n;
}
int pop(STACK *ps)
{
return( ps->data[ps-> top--]);
}
void reverse(char str[20])
{
STACK s;
int i;
initstack(&s);
for(i=0;i<strlen(str);i++)
push(&s, str[i]);
while(!isempty(&s))
str[i]=pop(&s);
printf("reversed string is:");
puts(str);
}
void main()
{
int ans;
printf("enter the reveresed string %c", reverse(str));
}
