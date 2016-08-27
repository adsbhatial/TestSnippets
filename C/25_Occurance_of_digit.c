/*
created on 27-08-2016 by Ashish Deep Singh
C Program to print occurrence of a particular digit in a number
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{ 
	int rem,temp,num,digit,count;
 
    printf("\nEnter a number: ");
    scanf("%d",&num);
    
	printf("\nEnter digit to search: ");
    scanf("%d",&digit);
 
    count = 0;
    temp = num;
 
    while(temp>0)
    {
        rem = temp%10;
        
		if( rem == digit)
		{
			count++;
        }
		
		temp = temp / 10;
    }
 
    printf("\nTotal occurrence of digit %d in number %d : %d",digit,num,count);
}
