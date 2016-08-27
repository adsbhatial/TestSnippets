/*
created on 27-08-2016 by Ashish Deep Singh
C Program to check number is Armstrong or not
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num, i,temp, k, sum = 0;
	
	printf("\nEnter the Number : ");
	scanf("%d",&num);
	
	temp = num ;
	while(num!=0)
	{
		k = num % 10;
		num = num / 10;	
		sum = sum + ( k * k * k );
	}
	if( temp == sum )
	{
		printf("\n%d is a Armstrong number",temp);
	}
	else
	{
		printf("\n%d is not a Armstrong number",temp);
	}
}
