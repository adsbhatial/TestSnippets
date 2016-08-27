/*
created on 27-08-2016 by Ashish Deep Singh
C Program to swap adjacent array elements
*/

#include <stdlib.h>
#include <stdio.h>

void main()
{
    int *array ,size,i;
    int temp;

	while(1)
	{
		printf("\nEnter size of array : ");
		scanf("%d",&size);
	
		if( size % 2 !=0)
		{
			printf("\nTotal number of elements should be EVEN.\nTry Again");
		}
		else
		{
			break;
		}
	}
	
	array = (int *) malloc(sizeof(int)*size);
	
    for( i = 0 ; i < size ; i++ )
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&array[i]);
    }
    
	for( i = 0 ; i < size ; i = i + 2 )
    {
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    }

    printf("\nArray elements after swapping adjacent elements : \n");
    for(i=0;i < size;i++)
    {
        printf("%d ",array[i]);
    }

}
