/*
created on 27-08-2016 by Ashish Deep Singh
C program to print all prime numbers from 1 to N.
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int n, i, k,j;
	
	printf("\nEnter N : ");
	scanf("%d",&n);
	
	printf("\nThe prime no are:");
    
	for(i=2;i<=n;i++)
    {
    	int c=0;
    	
		for(j=1;j<=i;j++)
    	{
    		k = i % j;
    		
			if (k == 0)
    		{
				c++;
    	    } 
		}
		if(c == 2)
    	{
			printf("\n%d",i);
		}
	
	}	
}
