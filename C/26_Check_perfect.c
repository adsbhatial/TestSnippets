/*
created on 27-088-2016 by Ashish Deep Singh
C Program to check number is perfect or not
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num, temp, i;
	int m=0;
	
	printf("\nEnter your number : ");
	scanf("%d",&num);
	
	temp = num ;
	
	for( i = 1 ; i < num ; i++)
	{
		if( (temp%i) == 0)
		{
			m = m + i ;
		}
	}
	
	if( temp == m )
	{
		printf("\n%d is a Perfect Number",temp);
	}
	else
	{
		printf("\n%d is not a Perfect Number",temp);
	}
}
