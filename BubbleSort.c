//Q1
#include<stdio.h>
int comp_count;
void bubble_sort( int a[20], int n)
{
int i,temp,pass;
comp_count=0;
for(pass=1;pass<n;pass++)
{
for(i=0;i<+n-pass-1;i++)
{
comp_count++;
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
}
void main()
{
int a[20],i,n;
printf("How Many Numbers");
scanf("%d",&n);
printf("\n Enter the Unsorted elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubble_sort(a,n);
printf("\n The Sorted output is:%d");
for(i=0;i<n;i++)
printf("\n%d\t",a[i]);
printf("\n The Total Number Compassion=%d",comp_count);
}
