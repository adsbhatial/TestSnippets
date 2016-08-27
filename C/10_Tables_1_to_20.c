/*
created on 27-08-2016 by Ashish Deep Singh
C Program to print tables from 1 to 20
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int m, j, k;

	for( m = 1 ; m <= 20 ; m++)
	{
		printf("\n Table of %d :-",m);
		for( j = 1 ; j <= 10 ; j++)
		{
			k = m * j;
			printf("\n %d * %d = %d",m,j,k);
		}
	printf("\n");
	}
}
