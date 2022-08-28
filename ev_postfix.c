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
int evalute(char postfix[20])
{
STACK s1;
int value ,i,opnd1, opnd2;
initstack(&s1);
for(i=0; postfix[i]!='\0'; i++)
{
switch(postfix[i])
     {
 case'+':opnd2=pop(&s1);
              opnd1=pop(&s1);
              push(&s1,opnd1+opnd2);
              break;
 case'-':opnd2=pop(&s1);
              opnd1=pop(&s1);
              push(&s1,opnd1+opnd2);
              break;
case'*':opnd2=pop(&s1);
              opnd1=pop(&s1);
              push(&s1,opnd1*opnd2);
              break;
case'/':opnd2=pop(&s1);
              opnd1=pop(&s1);
              push(&s1,opnd1/opnd2);
              break;
case'%':opnd2=pop(&s1);
              opnd1=pop(&s1);
              push(&s1,opnd1%opnd2);
              break;
default: printf("enter the value of operand %c", postfix[i]);
               scanf("%d", &value);
                push(&s1,value);
    }
}
return pop(&s1);
}
void main()
{
char postfix[20];
 int ans;

printf("enter the postfix expression:");
scanf("%s",postfix);
ans=evalute(postfix);
printf("\n the result is: %d",ans);

}

