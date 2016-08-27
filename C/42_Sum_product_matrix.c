/*
created on 27-08-2016 by Ashish Deep Singh
C program to read a matrix and find sum and product of all elements
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int **array,rows,cols,i,j;
	int sum = 0;
	int product = 1;
	
	printf("\nEnter Number of Rows    : ");
	scanf("%d",&rows);
	
	printf("\nEnter Number of columns : ");
	scanf("%d",&cols);
	
	array = (int **) malloc(sizeof(int *)*rows);
	
	for(i = 0 ; i < rows;i++)
	{
		array[i] = (int *) malloc(sizeof(int)*cols);
	}
	
	for( i = 0 ; i < rows ; i++ )
	{
		for( j = 0 ; j < cols ; j++ )
		{
			printf("\nEnter a[%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
			sum = sum + a[i][j];
			product = product * array[i][j];
		}
	}
	
	printf("\nSum of All Elements     : %d",sum);
	printf("\nProduct of All Elements : %d",product);
	
}