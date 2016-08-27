/*
created on 27-08-2016 by Ashish Deep Singh
C program to read and print One Dimensional Array of integer elements*/

#include <stdio.h>
#include<stdlib.h>

void main()
{
	int size, i, *array;
	
	printf("\nEnter size of array : ");
	scanf("%d",&size);
	
	array = (int *) malloc( sizeof(int) * size );
	
	printf("\nEnter Array Elements : \n");
	for(i = 0 ; i < size ; i++ )
	{
		scanf("%d",&array[i]);
	}
	
	printf("\nArray Elements :\n");
	for( i = 0 ; i < size ; i++ )
	{
		printf("%d ",array[i]);
	}
}
