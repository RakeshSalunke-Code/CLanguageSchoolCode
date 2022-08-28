#include<stdio.h>
int binary_search(int[],int ,int )
void main()
{
int list[20],item,pass,pos,n,i;
printf("how many element:");
scanf("%d",&n);
printf("\n enter sorted element:");
for(i=0;i<n;i++)
scanf("%d",&list[i]);
printf("\n enter item to be searched:");
scanf("%d",&item);
pos=binary_search(list,n,item);
if(pos==-1)
printf("\n item not found");
else
printf("%d \n Item found at pos %d",item,pos+1);
}
int binary_search(int list[],int n,int item)
{
int mid,lb,ub;
lb=0;
ub=n-1;
while(lb<=ub)
{
mid=(lb+ub)/2;
if(list[mid]==item)
return mid;
else if(item<list[mid])
ub=mid-1;
else
lb=mid+1;
}
return -1;
}

