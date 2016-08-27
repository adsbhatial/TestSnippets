/*
created on 27-08-2016 by Ashish Deep Singh
C program to print all upper case and lower case alphabets
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	char upper,lower;
	
	printf("\nUpper Case Alphabets : \n");
	for(upper=65;upper<91;upper++)
	{
		printf("%c ",upper);
    }
	
    printf("\nLower Case Alphabets : \n");
	for(lower = 97 ; lower < 123 ; lower++ )
	{
		printf("%c ",lower);
    }
}
