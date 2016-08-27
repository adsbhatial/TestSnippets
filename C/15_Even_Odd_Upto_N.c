/*
created on 27-08-2016 by Ashish Deep Singh
C program to print all even and odd numbers from 1 to N
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n, i;
	
	printf("\nEnter N : ");
	scanf("%d",&n);
	
	printf("\nThe Even no are : ");
    
	for( i = 1 ; i <= n ; i++ )
    {
		if( i%2 == 0)
		{
			printf("\n%d",i);
		}
	}
	
	printf("\nThe odd numbers are:");
	
	for( i=1 ; i <= n ; i++ )
    {
		if(i%2==1)
		{
			printf("\n%d",i);
		}
	}	
}
