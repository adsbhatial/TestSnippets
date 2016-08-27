#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

struct circle
{
	float radius;
	float area;
};

void read(struct circle *c)
{
	printf("\nEnter Radius of the Circle : ");
	scanf("%f",&c->radius);
}

float circleArea(struct circle c)
{
	float area;
	area = pi * c.radius *c.radius;
	return(area);
}

void displayArea(struct circle c)
{
	printf("\nArea of Circle : %.2f",c.area);
}

void main()
{
	struct circle c;
	read(&c);
	c.area = circleArea(c);
	displayArea(c);
}
