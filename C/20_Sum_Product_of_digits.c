/*
created on 27-08-2016 by Ashish Deep Singh
C Program to calculate SUM & PRODUCT of all digits
*/

#include <stdio.h>
#include <stdio.h>

void main()
{
	int num, k;
	
	printf("\nEnter Number : ");
	scanf("%d",&num);
	
	int sum = 0, product = 1;
	while( num != 0 )
	{
		k = num % 10;
		num = num / 10;
		sum = sum + k;
		product = product * k;
	}
	printf("\nSum of Digits     : %d",sum);
	printf("\nProduct of Digits : %d",product);
}
