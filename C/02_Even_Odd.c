/* 
created on 25-08-2016 by Ashish Deep Singh
C program find whether a number is even or odd 
*/

#include <stdio.h>
int main()
{
    int number;

    printf("\nEnter an integer : ");
    scanf("%d",&number);

    if(number%2 == 0)
	{
		printf("%d is even", number);
	}
    else
	{
		printf("%d is odd", number);

	}
 
    return 0;
}