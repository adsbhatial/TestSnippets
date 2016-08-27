/*
created on 27-08-2016 by Ashish Deep Singh
C program to print all leap years from 1 to N
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int year, y;
	
	printf("\nEnter Years : ");
	scanf("%d",&year);
	
	printf("\nThe Leap years are : ");
	
	for( y = 1 ; y < year ; y++ )
	{
		if((y % 400 == 0 )|| ((y % 4 == 0)&& (y %100 != 0)))
		{
			printf("\n Year : %d",y);
		}
	}
}
