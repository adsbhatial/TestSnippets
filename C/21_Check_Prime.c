/*
created on 27-08-2016 by Ashish Deep Singh
C Program to check number is prime or not
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num, i, k=1;
	int temp;
	
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	for( i = 1 ; i <= num/2 ; i++)
	{
		temp = i;
		if(num % temp == 0)
		{
			k++;
		}
	}
	
	if(k==2)
	{
		printf("\n%d is a Prime Number",num);
	}
	else
	{
		printf("\n%d is a Prime Number",num);
	}
}
