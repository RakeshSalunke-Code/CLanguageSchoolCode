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
int element();
void push(int element);
int main()
{
   int option, element;
      do
       {
         printf("\n1. push \n2. pop\n3. display\n4. peek\n0exit");
         printf("\n select any option");
        scanf("%d", &option);
    switch(option)
            {
              case 1: printf("\n enter the element to be inserted");
             scanf("%d",&element);
             push(element);
             break;
              case 2:element=pop();
            printf("element deleted:\t %d", element);
            break;
            case 3:display();
            break;
            case 4:printf(" Top most element & stack:\t %d", peek());
            break;
            case 0:exit(0);
          }
   }
          while (option!=0);
            return 0;
}

//--------------------------------------------------------------------------
int pop()
{
    if(isempty())
     {
     printf("\n stack underflow");
    exit (1);
    }
    else
   {
        element=stack_array [top];
           top=top-1;
    return element;
   }
}
//-----------------------------------------------------------------------------------
int peek()
{
    if(isempty())
    {

     printf("\n stack underflow");
     return 1;
    }
      else
   return 0;
}
//-------------------------------------------------------------------------
int isfull()
{
     if(top==MAX-1)
    return 1;
     else 
     return 0;
}
//--------------------------------------------------------
void display()
{
   int count;
   if(isempty())
   {
    printf("\n stack is empty");
    return;
   }
   else 
  {
   for(count=top; count>=0; count--)
  {
  printf("%d\t ", stack_array[count]);
  }
}
//--------------------------------
void push (int element)
{
    if(isfull())
   {
   printf("\n stack ourflow");
   return ;
   }
   else
   {
   top=top+1;
   }
   stack_array[top]=element;
}
}
