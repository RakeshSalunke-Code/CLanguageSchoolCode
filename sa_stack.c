#include<stdio.h>
#include<stdlib.h>
#define MAX 10 
int top=-1;
int stack_array[MAX];
int pop();
int peek();
int isempty();
int isfull();
void display();
int element;
void push(int element);
int main()
{
   int option,element;
do
{
  printf("\n1.push\n2.pop\n3.Display\n4.peek\n5.exit");
   printf("\nSelect any option");
     scanf("%d",&option);
switch(option)
{
     case 1:
             printf("\nenter the element");
                scanf("%d",&element);
                push(element);
                 break;
     case 2:
                 element=pop();
                 printf("Element Deleted:\t%d",element);
                 break;
     case 3:
                display();
                break;
     case 4:
        	printf("Top ,ost element of stack:\t%d",peek());
                break;
    case 5:			
               exit(0);
 }
}while(option !=5);
   return 0;
}
int pop()
{
    if(isempty())
   {
      printf("\nStack Underflow");
        exit(1);
   }
  else
   {
      element=stack_array[top];
       top=top-1;
       return element;
   }
}
  int peek()
{
   if(isempty())
  {
      printf("\nstack Underflow");
       return 1;
  }
else
  {
     return stack_array[top];
  }
}
int isempty()
{
  if(top==-1)
  return 1;
else 
  return 0;
}
 int isfull()
{
   if(top==MAX-1)
   return 1;
   else   
    return 0;
 }
 void display()
{
  int count;
  if(isempty())
{
   printf("\nstack is empty");
    return;
}
else
 {
   for(count=top;count>=0;count--)
   {
     printf("%d\t",stack_array[count]);
    }
}
}
 void push(int element)
{
  if(isfull())
{
  printf("\nstack overflow");
     return;
}
 else
 {
    top=top+1;
   stack_array[top]=element;
 }
}
