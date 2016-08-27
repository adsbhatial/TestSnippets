/* 
created on 27-08-2016 by Ashish Deep Singh
Program to find sum of first N natural number, N must be taken by the user
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num, sum = 0;
	
	printf("\nEnter N : ");
	scanf("%d",&num);
	
	sum = (num * ( num + 1) ) / 2;
	
	printf("\nThe sum is : %d",sum);
}
