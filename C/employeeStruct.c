#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


struct employee {
	int empNumber;
	char empName[30];
	float basicSalary;
	float HRA;
	float DA;
	float GrossSalary;
	float IncomeTax;
	float NetSalary;
};

void calculateNet(struct employee *);

void main()
{
	struct employee x;
	
	printf("\nEnter Employee ID : ");
	scanf("%d",&x.empNumber);
	printf("\nEnter Employee Name : ");
	//gets(x.empName);
	scanf("%s",x.empName);
	printf("\nEnter Employee\'s Basic Salary : ");
	scanf("%f",&x.basicSalary);
	
	calculateNet(&x);
	
	printf("\n\nEmployee ID : %d",x.empNumber);
	printf("\nEmployee Name : %s",x.empName);
	printf("\nEmployee Basic Salary : %f",x.basicSalary);
	printf("\nEmployee HRA : %f",x.HRA);
	printf("\nEmployee DA : %f",x.DA);
	printf("\nEmployee GrossSalary : %f",x.GrossSalary);
	printf("\nEmployee IncomeTax : %f",x.IncomeTax);
	printf("\nEmployee NetSalary : %f",x.NetSalary);
}

void calculateNet(struct employee *emp)
{
	emp->HRA = (emp->basicSalary)*0.1;
	emp->DA = (emp->basicSalary)*0.73;
	emp->GrossSalary = (emp->basicSalary)+(emp->DA)+(emp->HRA);
	emp->IncomeTax = (emp->GrossSalary)*0.3;
	emp->NetSalary = (emp->GrossSalary)-(emp->IncomeTax);
}