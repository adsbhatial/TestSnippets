#include <stdio.h>

void TriRect(int,int,int *,float *);

void main()
{
	int d1,d2,R_Area;
	float T_Area;
	
	printf("\nEnter Dimension 1 : ");
	scanf("%d",&d1);
	
	printf("\nEnter Dimension 2 : ");
	scanf("%d",&d2);
	
	TriRect(d1,d2,&R_Area,&T_Area);
	
	printf("\nArea of Rectangle : %d",R_Area);
	printf("\nArea of Triangle : %f",T_Area);
	
}

void TriRect(int x,int y,int *R_Area,float *T_Area)
{
	*R_Area = x * y;
	
	*T_Area =  (x * y )/2;
}