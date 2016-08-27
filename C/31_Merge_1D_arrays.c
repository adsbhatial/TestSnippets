/*
created on 27-08-2016 by Ashish Deep Singh
C Program to merge two one dimensional Arrays
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *array1 , *array2 ,*result;
	int i, j, k, size1, size2;

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

	i = 0;
	j = 0;
	k = 0;

	result = (int *) malloc( sizeof(int) * ( size1 + size2 ) );
	
	for(i = 0 ; i< size1 ;i++)
	{
		result[i] = array1[i];
	}
	
	for(i = 0 ; i< size2 ; i++ )
	{
		result[size1+i] = array2[i];
	}
	
	printf("\nMerged array is : ");
	
	for (i = 0; i < size1 + size2; i++)
	{
		printf("%d ", result[i]);
	}

}
