/*
created on 27-088-2016 by Ashish Deep Singh
C program to print all Armstrong numbers from 1 to N
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num1, i;
	
	printf("\nEnter N : ");
	scanf("%d",&num1);
	
	printf("\nThe Armstrong no are : ");
    
	for( i = 1 ;i < num1 ; i++ )
    {
    	int num = i;
    	int digit, sum = 0;
    	
		while( num != 0 )
    	{
    		digit = num % 10;
    		num = num / 10;
    		sum = sum +(digit * digit * digit);
		}
		
		if(sum == i)
		{
			printf("\n%d",i);
		}
	}
}
