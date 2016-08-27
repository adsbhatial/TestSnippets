/*
created on 26-08-2016 by Ashish Deep Singh
C program to read weekday number and print weekday name using switch
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	char choice;
	
	printf("\nEnter the Nummber of Day : ");
	fflush(stdin);
	choice = getchar();
	
	while(1)
	{
		switch(choice)
		{
			case '1':
			{
				printf("\nThe Day is Sunday");
				exit(0);
				break;
				
			}
			case '2':
			{
				printf("\nThe Day is Monday");
				exit(0);
				break;
			}
			case '3':
			{
				printf("\nThe Day is Tuesday");
				exit(0);break;
			}
			case '4':
			{
				printf("\nThe Day is Wednesday");
				exit(0);break;
			}
			case '5':
			{
				printf("\nThe Day is Thursday");
				exit(0);break;
			}
			case '6':
			{
				printf("\nThe Day is Friday");
				exit(0);break;
			}
			case '7':
			{
				printf("\nThe Day is Saturday");
				exit(0);break;
			}
			default:
			{
				printf("\nWrong Input. Try Again\n");
				break;
			}
		}
	}
}