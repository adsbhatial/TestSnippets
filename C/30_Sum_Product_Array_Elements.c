/*
created on 27-088-2016 by Ashish Deep Singh
C program to calculate Sum, Product of all elements*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int size, i, *array, sum = 0 , product = 1;
	
	printf("\nEnter size of array : ");
	scanf("%d",&size);
	
	array = (int *)malloc(sizeof(int)*size);
	
	printf("\nEnter Array Elements : \n");
	for( i = 0 ; i < size ; i++ )
	{
		scanf("%d",&array[i]);
		
		sum = sum + array[i];
		product = product * array[i];
	}
	
	printf("\nThe Sum of Elements of array : %d",sum);
	printf("\nThe Product of Elements of array : %d",product);
	
}