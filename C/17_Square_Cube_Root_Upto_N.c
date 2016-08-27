/*
created on 27-08-2016 by Ashish Deep Singh
C program to print square, cube and square root of all numbers from 1 to N
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int num, i, k, l;
	float m;
	
	printf("\nEnter N : ");
	scanf("%d",&num);
	
	printf("\n-------------------------\n");
	for(i=1;i<=num;i++)
	{
		printf("\n%d : ",i);
		printf(" Square = %d ||",(i*i));
		printf(" Cube = %d ||",(i*i*i));
		printf(" Root = %0.4f ",sqrt(i));
    }	  
}


