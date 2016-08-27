/*
created on 27-08-2016 by Ashish Deep Singh
C Program to insert reverse elements into another
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *array,*result,size,i,j;
	
    printf("\nEnter Size of array : ");
	scanf("%d", &size);
	
	array = (int *) malloc(sizeof(int)*size);
	result = (int *) malloc(sizeof(int)*size);
	
	for (i = 0; i < size; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d", &array[i]);
	}
	
	j = size -1 ;
    for( i = 0 ; i < size ; i++ )
    {
		result[j] = array[i];
		j--;
    }
	
    printf("\nResultant Array is  : ");
	
	for( i = 0 ; i < size ; i++ )
	{	
		printf("%d ",result[i]);
	}
    
}
