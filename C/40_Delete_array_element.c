/*
created on 27-08-2016 by Ashish Deep Singh
C Program to delete an element from the array
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *array,size,value,i,index,j,flag = 0;
	
    printf("\nEnter Size of array : ");
	scanf("%d", &size);
	
	array = (int *) malloc(sizeof(int)*size);
	
	for (i = 0; i < size; i++)
	{
		printf("Enter element %d : ",i+1);
        scanf("%d",&array[i]);
	}
	
	printf("\nEnter Value to be deleted : ");
	scanf("%d",&value);
	
	for (i = 0; i < size; i++)
	{
		if( array[i] == value )
		{
			index = i ;
			flag = 1;
			break;
		}
	}
	
	if(flag == 1)
	{
		for( j = index ; j < size-1;j++ )
		{
			array[j] = array[j+1];
		}
		
		array = (int *) realloc(array,(sizeof(int)*(size-1)));
		size = size - 1;
		
		printf("\nArray with new size = %d : ",size );
		
		for (i = 0; i < size; i++)
		{
			printf("%d ",array[i]);
		}
	
	}
	else
	{
		printf("\nValue not present in the array");
	}
	
}