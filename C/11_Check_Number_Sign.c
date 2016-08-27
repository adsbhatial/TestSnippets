/*
created on 27-08-2016 by Ashish Deep Singh
C Program to check entered number is ZERO, POSITIVE or NEGATIVE until user does not want to quit
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	
	signed int num;
	char choice;
	
	while(1)
	{
		printf("\nEnter Number : ");
		fflush(stdin);
		
		scanf("%d",&num);
		
		if( num == 0 )
		{
			printf("\nNo is ZERO");
		}
		else if( num < 0 )
		{
			printf("\nNo is NEGATIVE");
		}
		else if( num > 0 )
		{
			printf("\nNo is POSITIVE");
		}
		else
		{
			printf("\nInvalid Input.");
		}
		
		while(1)
		{
			printf("\nDo You Want to check any More Numbers ? Y or N : ");
			fflush(stdin);
			choice = getchar();
		
			if(choice == 'N' || choice == 'n')
			{
				printf("\nThank You");
				exit(0);
			}
			else if(choice == 'Y' || choice == 'y')
			{
				break;
			}
			else
			{
				printf("\nInvalid Choice. Try Again");
				continue;
			}
		}
	}
}