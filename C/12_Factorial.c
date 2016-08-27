/*
created on 27-088-2016 by Ashish Deep Singh.
C Program to Find Factorial of a Number
*/

#include<stdio.h>
#include<stdlib.h>

void main() 
{
	int num,fact=1;
	
	printf("\nEnter the Number    : ");
	scanf("%d",&num);
	
	while( num != 0 )
	{
		fact = fact * num;
		num--;
	}
	
	printf("\nFactorial Of Number : %d",fact);
}
