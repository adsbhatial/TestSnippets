//Find largest and smallest of n integer array
#include <stdio.h>
#include <stdlib.h>
void read(int *, int);
void display(int *, int);
void largestSmallest(int[], int, int * , int *);

void main()
{
	int *a,N,l,s;
	
	printf("\nEnter the number of elements : ");
	scanf("%d",&N);
	
	a = (int *) malloc(sizeof(int)*N);
	
	read(a,N);
	display(a,N);
	largestSmallest(a,N,&l,&s);
	printf("\nThe lagest elements is : %d\nThe smallest element is : %d",l,s);
	
}

void read(int *a, int N)
{
	int i;
	for (i =0;i < N; i++)
	{
		printf("\nEnter the element %d : ",i+1);
		scanf("%d",&a[i]);
	}
}

void display(int *a, int N)
{
	int i;
	for (i =0;i<N;i++)
	{
		printf("\nElement %d : %d",i+1,a[i]);
	}
}

void largestSmallest(int a[],int N, int *pl , int *ps)
{
	int i;
	*pl=*ps=a[0];
	for (i=1;i<N;i++)
	{
		if(*pl>a[i])
		{
			*pl=a[i];
		}
		if(*ps<a[i])
		{
			*ps=a[i];
		}
	}
}