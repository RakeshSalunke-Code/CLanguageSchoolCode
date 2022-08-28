//Q4
#include<stdio.h>
int comp_count;
void Bubblesort(int a[5])
{
	int i,temp,pass;
	comp_count=0;
	for(pass=1;pass<5;pass++)
	{
		for(i=0;i<=5-pass-1;i++)
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
	int a[5]={10,20,35,23,12},i;
	printf("Unsorted elements :\n");
	for(i=0;i<5;i++)
	printf(" %d",a[i]);
	Bubblesort(a);
	printf("\n The sorted output is :\n");
	for(i=0;i<5;i++)
	printf("%d\t",a[i]);
	printf("\n The total number of comparisons = %d\n",comp_count);
}
