#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ugStudent
{
	char usn[20];
	char name[30];
	char branch[10];
	int sem,fees;
};

struct pgStudent
{
	int regno;
	char name[20];
	char branch[10];
	int sem,stipend;
};

union UPStudent
{
	struct ugStudent u;
	struct pgStudent p;
};

struct student
{
	union UPStudent upStud;
	char up;
};

int main()
{
	struct student s[5];
	int i;
	
	
	for( i = 0 ; i < 5 ; i++ )
	{
		while(1)
		{
			fflush(stdin);
			printf("\nEnter U for UG Student or P for PG Student : ");
			s[i].up = getchar();
			if( s[i].up == 'u' || s[i].up == 'U'||s[i].up == 'p' || s[i].up == 'P')
			{
				break ;
			}
			else
			{
				printf("\nInvalid Choice\nTry Again");
			}
		}
		if(s[i].up == 'u' || s[i].up == 'U')
		{
			printf("\nEnter USN : ");
			scanf("%s",s[i].upStud.u.usn);
			printf("\nEnter name : ");
			scanf("%s",s[i].upStud.u.name);
			printf("\nEnter branch : ");
			scanf("%s",s[i].upStud.u.branch);
			printf("\nEnter sem : ");
			scanf("%d",&s[i].upStud.u.sem);
			printf("\nEnter fees : ");
			scanf("%d",&s[i].upStud.u.fees);
		}
		else
		{
			printf("\nEnter Reg No : ");
			scanf("%d",&s[i].upStud.p.regno);
			printf("\nEnter name : ");
			scanf("%s",s[i].upStud.p.name);
			printf("\nEnter branch : ");
			scanf("%s",s[i].upStud.p.branch);
			printf("\nEnter sem : ");
			scanf("%d",&s[i].upStud.p.sem);
			printf("\nEnter Stipend : ");
			scanf("%d",&s[i].upStud.p.stipend);
		}
	}
	
	printf("\n Records :- \n");
	for( i = 0 ; i < 5 ; i++ )
	{
		if(s[i].up == 'u' || s[i].up == 'U')
		{
			printf("\n%s %s %s %d %d",s[i].upStud.u.usn,s[i].upStud.u.name,s[i].upStud.u.branch,s[i].upStud.u.sem,s[i].upStud.u.fees);
		}
		else
		{
			printf("\n%d %s %s %d %d",s[i].upStud.p.regno,s[i].upStud.p.name,s[i].upStud.p.branch,s[i].upStud.p.sem,s[i].upStud.p.stipend);
		}
	
	}
	return(0);
}