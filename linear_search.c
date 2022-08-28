#include<stdio.h>
int linear_search(int a[],int n, int sr)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==sr)
return i;
}
return -1;
}
void display(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}

void main()
{
int a[20],i,j,n,x,ans;
printf("\n enter how many element");
scanf("%d",&n);
printf("\n enter element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n element are:");
display (a,n);
printf("\n enter the element to be searched");
scanf("%d", &x);
ans=linear_search(a,n,x);
if(ans==-1)
printf("\n%d is not found",x);
else
printf("\n %d is found of %d position", x,ans+1);
}
