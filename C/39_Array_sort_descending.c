/*
created on 27-08-2016 by Ashish Deep Singh
C Program to sort array in descending order
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *array,size,temp,i,j;
	
    printf("\nEnter Size of array : ");
	scanf("%d", &size);
	
	array = (int *) malloc(sizeof(int)*size);
	
	for (i = 0; i < size; i++)
	{
		printf("Enter element %d : ",i+1);
        scanf("%d",&array[i]);
	}
	
	
    for( i = 0 ; i < size ; i++ )
    {
        for( j = i + 1 ; j < size ; j++ )
        {
			if( array[i] < array[j] )
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
        }

    }
	
    printf("\nSorted Array in descending order : ");
	
	for( i = 0 ; i < size ; i++ )
	{
		printf("%d ",array[i]);
	}
    
}
