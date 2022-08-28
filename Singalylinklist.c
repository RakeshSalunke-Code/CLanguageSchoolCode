#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
      int data;
     struct node *link;
}node;
struct node  *first, *curr, *nw, * prev;
int no;
void create()
{
       first=NULL;
       printf("\n enter the no. ending with zero:\n");
       scanf("%d", &no);
       while(no!=0)
       {
          nw=(struct node * )malloc(sizeof (struct node));
          nw->data=no;
          nw->link=NULL;
          if (first==NULL)
                       first=curr=nw;
         else
         {
                       curr->link=nw;
                       curr=nw;
          }
          scanf("%d",&no);
       }
}
//--------------------------------------------------------------------------------
void display()
{
       curr=first;
       while(curr!=NULL)
       {
           if ( curr-> link!=NULL)
           printf("%d->", curr-> data);
           else
           printf("%d",curr-> data);
           curr=curr->link;
       }
}
void main()
 {
             int ch,ans;
             do
                {
                   printf("\n ************************MENU*****************************\n");
                   printf("\n 1:create");
                   printf("\n 2: Display");  
 printf("\n 3:Exit");
  printf("\n enter your chioce:");
                                 scanf("%d",&ch);
                                 switch(ch)
                                 {
                                  case 1:
                                                create();
                                                break;
                                   case 2:
                                                display();
                                                break;
                                   case 3:
                                               exit(0);
                                   default:
                                    printf("\n Invalid chioce.....");
                                }
                        }
                           while(ch!=3);
 }
