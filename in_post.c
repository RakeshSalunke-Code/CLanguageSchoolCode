#include<stdio.h>
#define MAXSIZE 20
typedef struct
{
int data[MAXSIZE];
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
   return (ps->top==MAXSIZE-1);
  }
   int pop(STACK *ps)
  {
  return (ps->data[ps->top--]);

  }
  void push(STACK *ps , int n)
  {
  ps->data[++ps->top]=n;
  }
int stacktop(STACK *ps)
{
return ps->data[ps->top];
}
int priority(char ch)
{
switch(ch)
{
case '(' : return 0;
case '+':
case '-' :return 1;
case'*':
case '/':
case'%':return 2;
}
return 0;
}
void convert(char infix[20],char postfix[20])
{
int i,j=0;
char ch, ch1;
STACK s;
initstack(&s);
for(i=0;infix[i]!='\0';i++)
{
ch=infix[i];
switch(ch)
{
case '(': push(&s,ch);
 break;
case '+':
case '-':
case '*':
case '/':
case'%':
  if(isempty(&s))
   push(&s,ch);
  else
  {
while(priority(stacktop(&s))>=priority(ch))
postfix[j++]=pop(&s);
push(&s,ch);
}
break;
case ')':
while((ch1=pop(&s))!='(' )
postfix[j++]=ch1;
break;
default: postfix[j++]=ch;
}
}
while(!isempty(&s))
postfix[j++]=pop(&s);
postfix[j]='\0';
}
void main()
{
char infix[20],postfix[20];
printf("\n enter infix expression");
scanf("%s", infix);
convert(infix,postfix);
printf("\n the postfix string is %s",postfix);
}
