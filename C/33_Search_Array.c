/*
created on 27-08-2016 by Ashish Deep Singh
C Program to search element in an array
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *array1,size,n,search,i,flag=0;
	
    printf("\nEnter Size of array : ");
	scanf("%d", &size);
	
	array1 = (int *) malloc(sizeof(int)*size);
	
	for (i = 0; i < size; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d", &array1[i]);
	}
	
	printf("\nEnter the value to be found : ");
    scanf("%d",&search);
    
	for( i = 0 ; i < size ; i++)
    {
       if( array1[i] == search )
       {
           printf("\nValue found at position : %d ",i+1);
           flag = 1;
           break;
       }
    }
	
    if(flag!=1)
    {
        printf("\nValue not found");
    }

}
