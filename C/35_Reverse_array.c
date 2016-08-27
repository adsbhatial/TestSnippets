/*
created on 27-08-2016 by Ashish Deep Singh
C Program to sort reverse array elements
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *array,*temp,size,i,j;
	
    printf("\nEnter Size of array : ");
	scanf("%d", &size);
	
	array = (int *) malloc(sizeof(int)*size);
	temp = (int *) malloc(sizeof(int)*size);
	
	for (i = 0; i < size; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d", &array[i]);
	}
	
	j = size -1 ;
    for( i = 0 ; i < size ; i++ )
    {
		temp[j] = array[i];
		j--;
    }
	
    printf("\nReversed Array is  : ");
	
	for( i = 0 ; i < size ; i++ )
	{	
		array[i] = temp[i];
		printf("%d ",array[i]);
	}
    
}
