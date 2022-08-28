#include<stdio.h>
#include<stdlib.h>
int comp_count;
void generate(int a[20],int n)
{
	int i;
	for(i=0;i<n;i++)
	a[i]=rand()%100;
}
void display(int a[20],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
void bubblesort(int a[20],int n)
{
	int temp,i,pass;
	comp_count=0;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<=n-pass-1;i++)
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
	int i,n,a[20];
	printf("Enter how many elements :");
	scanf("%d",&n);
	printf(" Unsorted elements are :\n");
	generate(a,n);
	display(a,n);
	printf("\nThe sorted output is :\n");
	bubblesort(a,n);
        for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\nThe total no. of comparisons = %d\n\n",comp_count);
}
		
