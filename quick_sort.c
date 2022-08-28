#include<stdio.h>
void quick_sort(int a[],int lb, int ub)
{
int j;
if (lb<ub)
{
j=partition(a,lb,ub);
quick_sort(a,lb,j-1);
quick_sort(a,j+1,ub);
}
}
int partition(int a[],int lb,int ub)
{
int temp,pivot,up,dn;
up=ub;
dn=lb+1;
pivot=a[lb];
do
{
while((a[dn]<pivot)&&(dn<=ub))
dn++;
while((a[up]>pivot)&&(up>lb))
up--;
if(dn<up)
{
temp=a[dn];
a[dn]=a[up];
a[up]=temp;
}
}
while(dn<up);
a[lb]=a[up];
a[up]=pivot;
return up;
}
void main()
{
int a[20],i,n;
printf("\n how many no");
scanf("%d",&n);
printf("\n enter the unsorted no");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quick_sort(a,0,n-1);
printf("\n the sorted list is ");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
