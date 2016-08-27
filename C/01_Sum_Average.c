/* 
created on 25-08-2016 by Ashish Deep Singh
C program find sum and average of two numbers 
*/

#include <stdio.h>
 
int main()
{
    int firstNum,secondNum,sum;
    float avg;
 
    printf("\nEnter first number  : ");
    scanf("%d",&firstNum);
    printf("\nEnter second number : ");
    scanf("%d",&secondNum);
 
    sum=firstNum+secondNum;
    avg= (float)(firstNum+secondNum)/2;
 
    printf("\nSum of %d and %d      : %d",firstNum,secondNum,sum);
    printf("\nAverage of %d and %d  : %.2f",firstNum,secondNum,avg);
 
    return 0;
}