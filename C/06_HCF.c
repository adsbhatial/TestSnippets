/*
created on 25-08-2016 by Ashish Deep Singh 
C Program to find HCF of two numbers
*/

#include <stdio.h>

int main()
{
    int num1, num2, temp1, temp2;
    
    printf("\nEnter the First number : ");
    scanf("%d",&num1);
	
	printf("\nEnter the Second number : ");
	scanf("%d",&num2);
	
	temp1 = num1;
	temp2 = num2;

    while( temp1 != temp2 )
    {
        if( temp1 > temp2)
		{
			temp1 -= temp2;
		}
        else
		{
			temp2 -= temp1;
		}
    }
    printf("\nHCF of %d and %d : %d",num1,num2,temp1);

    return 0;
}