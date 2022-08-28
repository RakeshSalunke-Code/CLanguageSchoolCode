#include<stdio.h>
int count;
void Insertionsort(int a[20],int n)
{
	int i,j,key;
	count=0;
	for(j=1;j<n;j++)
	{
		key=a[j];
		for(i=j-1;i>=0;i--)
		{
			count++;
			if(a[i]>key)
			a[i+1]=a[i];
			else
			break;
		}
		a[i+1]=key;
	}
}
void main()
{
	int a[20],i,n;
	printf("How many number :");
	scanf("%d",&n);
	printf("\nEnter the unsorted elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	Insertionsort(a,n);
	printf("\n The sorted output:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n Total number of comparisons = %d\n",count);
}
	
