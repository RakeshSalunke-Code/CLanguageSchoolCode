//Q2
#include<stdio.h>
int count;
void insertion_sort( int a[20], int n)
{
 int i,j,key;
count=0;
for(j=1; j<n;j++);
{
 key=a[j];
for(i=j-1;i<n;i--)
{
 count++;
if (a[i]>key)
a[i+1]=a[i];
}
else
a[i+1]=key;
}
}
void main()
 {
int a[20],i,n;
printf("how many number");
scanf("%d",&n);
printf("\n enter the unsorted element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
insertion_sort(a,n);
printf("\n the sorted o/p:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n total no of comparision=%d",count);
}

