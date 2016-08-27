/*
created on 27-08-2016 by Ashish Deep Singh
C Program to count digits in a numbers
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num, temp, count = 0;
	
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	temp = num ;
	
	while(temp != 0)
	{
		temp = temp / 10;	
		count++;
	}
    printf("\nNo of Digits in %d : %d",num,count);
}
