/*
created on 27-08-2016 by Ashish Deep Singh
C program to read a matrix and find sum and product of all elements
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int **array,**temp,rows,cols,i,j;
	
	printf("\nEnter Number of Rows    : ");
	scanf("%d",&rows);
	
	printf("\nEnter Number of columns : ");
	scanf("%d",&cols);
	
	array = (int **) malloc(sizeof(int *)*rows);
	temp = (int **) malloc(sizeof(int *)*rows);
	
	for(i = 0 ; i < rows;i++)
	{
		array[i] = (int *) malloc(sizeof(int)*cols);
		temp[i] = (int *) malloc(sizeof(int)*cols);
	}
	
	for( i = 0 ; i < rows ; i++ )
	{
		for( j = 0 ; j < cols ; j++ )
		{
			printf("\nEnter a[%d][%d] : ",i+1,j+1);
			scanf("%d",&array[i][j]);
			temp[j][i] = array[i][j];
		}
	}
	
	for( i = 0 ; i < rows ; i++ )
	{
		for( j = 0 ; j < cols ; j++ )
		{
			array[i][j] = temp[i][j];
		}
	}
	
	free(temp);
	
	printf("\nThe Transposed matrix : \n");
	for( i = 0 ; i < rows ; i++ )
	{
		for( j = 0 ; j < cols ; j++ )
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
}