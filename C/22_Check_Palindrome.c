/*
created on 27-08-2016 by Ashish Deep Singh
C Program to check number is palindrome or not
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num, i, temp, sum = 0;
	
	printf("\nEnter the number : ");
	scanf("%d",&num);
	temp = num;
	
	while( num != 0 )
	{
		sum = sum * 10 + num%10;
		num = num / 10;	
	}
		if(temp == sum)
		{
			printf("\n%d is Palindrome",temp);
		}
		else
		{
			printf("\n%d is not Palindrome",temp);
		}
}
