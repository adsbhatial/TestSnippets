/*
created on 25-08-2016 by Ashish Deep Singh
C program to find largest of three numbers 
*/

#include <stdio.h>
void main()
{
    float num1, num2, num3;

    printf("\nEnter the first number  : ");
    scanf("%f",&num1);
	
	printf("\nEnter the second number : ");
    scanf("%f",&num2);
	
	printf("\nEnter the third number  : ");
    scanf("%f",&num3);
	

    if( num1 >= num2 && num1 >= num3 )
	{
		printf("\n%3f is the largest number.", num1);
	}
    else if  ( num2 >= num1 && num2 >= num3 )
	{
		printf("\n%f is the largest number.", num2);
	}
    else
    {
		printf("\n%f is the largest number.", num3);
	}
}