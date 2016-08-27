/*
created on 26-08-2016 by Ashish Deep Singh
Write a C Program to multiply two numbers using plus operator
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num1,num2,product,i;
	
	printf("\nEnter the first number  : ");
	scanf("%d",&num1);
	
	printf("\nEnter the second number : ");
	
	scanf("%d",&num2);
	
	product = 0;
	
	if(num1>num2)
	{
		for(i=1;i<=num2;i++)
		{
			product = product+num1;
		}
	}
	else
	{
		for(i=1;i<=num1;i++)
		{
			product = product+num2;
		}
	}
	
	printf("\nThe Product is          : %d",product);
}