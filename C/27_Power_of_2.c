/*
created on 27-08-2016 by Ashish Deep Singh
CProgram to check number is power of 2 or not
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num, temp;
	
	printf("\nEnter Your No : ");
	scanf("%d",&num);
	temp = num ;
	while( num != 1 )
	{
		if( num%2 == 0)
		{
			num = num/2;
	    }
	    else
	    {
	    	printf("\n%d is not a power of 2",temp);
	    	exit(0);
		}
	}
	printf("\n%d is a power of 2",temp);
}
