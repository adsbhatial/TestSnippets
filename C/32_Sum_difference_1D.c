/*
created on 27-08-2016 by Ashish Deep Singh
C program to Add and Subtract of Two One Dimensional Array elements
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *array1 , *array2 , *sum ,*diff,i,size1,size2;
	
	printf("\nEnter Size of 1st array : ");
	scanf("%d", &size1);
	
	array1 = (int *) malloc(sizeof(int)*size1);
	
	printf("\n Enter array Elements for 1st Array : \n");
	for (i = 0; i < size1; i++)
	 {
		scanf("%d", &array1[i]);
	}

	printf("\nEnter Size of 2nd array : ");
	scanf("%d", &size2);
	
	array2 = (int *) malloc(sizeof(int)*size2);
	
	printf("\nEnter array Elements for 2nd Array : \n");
	for (i = 0; i < size2; i++)
	{
		scanf("%d", &array2[i]);
	}
    
	if( size1 > size2 )
	{
		sum  =  (int *) malloc(sizeof(int)*size1);
		diff = (int *) malloc(sizeof(int)*size1);
		
		for(i = 0 ; i < size1 ; i++)
		{
			sum[i] = array1[i];
			diff[i] = array1[i]; 
		}
		
		for(i=0 ; i< size2;i++)
		{
			sum[i] = array1[i] + array2[2];
			diff[i] = array1[i] - array2[2];
		}
		
		printf("\nSum :");
		for(i = 0 ; i < size1 ; i++)
		{
			printf("%d ",sum[i]);
		}
		
		printf("\nDiff :");
		for(i = 0 ; i < size1 ; i++)
		{
			printf("%d ",diff[i]);
		}
	}
	else
	{
		sum  =  (int *) malloc(sizeof(int)*size2);
		diff = (int *) malloc(sizeof(int)*size2);
		
		for(i = 0 ; i < size2 ; i++)
		{
			sum[i] = array2[i];
			diff[i] = array2[i]; 
		}
		
		for(i=0 ; i< size1;i++)
		{
			sum[i] = array1[i] + array2[2];
			diff[i] = array1[i] - array2[2];
			
		}
		
		printf("\nSum :");
		for(i = 0 ; i < size2 ; i++)
		{
			printf("%d ",sum[i]);
		}
		
		printf("\nDiff :");
		for(i = 0 ; i < size2 ; i++)
		{
			printf("%d ",diff[i]);
		}
	}
	
}
