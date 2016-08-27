/*
create don 27-08-2016 by Ashish deep Singh
C Program to check number is perfect square or not
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num, k,i;
	
	printf("\n\nPlease enter your number:");
	scanf("%d",&num);
	
	for( i = 1 ; i < num ; i++ )
	{
		k = 1;
		k = i * i ;
		if( k == num )
		{
			printf("%d is a perfect square",num);
			exit(0);
		}
	}
	printf("%d is not a perfect square",num);
}
