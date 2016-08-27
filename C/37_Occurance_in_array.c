/*
created on 27-08-2016 by Ashish Deep Singh
C Program to find occurance of a value in an array
*/

#include <stdlib.h>
#include <stdio.h>

void main()
{
    int *array;
    int value, size, i, j, count = 0;
    
	printf("\nEnter size of array : ");
	scanf("%d",&size);
	
	array = (int *) malloc(sizeof(int)*size);
	
    for( i = 0 ; i < size ; i++ )
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&array[i]);
    }	
	
	printf("\nEnter Value Whose Occurance has to be found : ");
	scanf("%d",&value);
	
    for( i = 0; i < size; i++)
    {
		if(array[i] == value)
		{
			count++;
		}
    }
	
	printf("\nThe Ocurrance of %d in array : %d",value,count);
}
