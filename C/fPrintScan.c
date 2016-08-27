/*
created on 25-08-2016 by Ashish Deep Singh
C program to use "fprint()" and "fscanf()" functions
*/

#include <stdio.h>
#include <stdlib.h>

struct student
{
	int rollno;
	char name[20];
	float per;
};

void createStudentFile(char []);
void displayStudentFile(char[]);

int main()
{
	char filename[20];
	printf("\nEnter Student File Name : ");
	scanf("%s",filename);
	createStudentFile(filename);
	displayStudentFile(filename);
}

void displayStudentFile(char filename[])
{
	FILE *filePointer;
	char ch;
	struct student stud;
	filePointer = fopen(filename,"r");
	while(!feof(filePointer))
	{
		fscanf(filePointer,"%d%s%f",&stud.rollno,stud.name,&stud.per);
		printf("\n%d %s %f",stud.rollno,stud.name,stud.per);
	}
	fclose(filePointer);
	
}

void createStudentFile(char filename[])
{
	FILE *filePointer;
	char ch;
	struct student stud;
	filePointer = fopen(filename,"w");
	do
	{
		printf("\nEnter Student Roll No : ");
		scanf("%d",&stud.rollno);
		printf("\nEnter Student Name : ");
		scanf("%s",stud.name);
		printf("\nEnter Student Percentage : ");
		scanf("%f",&stud.per);
		fprintf( filePointer,"%d%s\%f",stud.rollno,stud.name,stud.per);
		
		printf("\n Any more record . Y or N :");
		fflush(stdin);
		ch = getchar();
	}while(ch=='Y'||ch=='y');
	
	fclose(filePointer);
}
