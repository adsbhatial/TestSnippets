/*
created on 25-08-2016 by Ashish Deep Singh 
C Program to convert Celsius to Fahrenheit and vice versa 
*/
#include <stdio.h>

void main()
{
	float celsius,far;
	
	printf("Enter the temperature in celsius      :");
	scanf("%f",&celsius);
	
	far=1.8*celsius+32;
	
	printf("\n\t%.2f Celsius = %.2f Fahrenheit",celsius,far);
	
	printf("\n\nEnter the temperature in Fahrenheit:");
	
	scanf("%f",&far);
	celsius = ( far - 32 ) / 1.8;
	
	printf("\n\t%.2f Fahrenheit = %.2f Celsius",far,celsius);
}