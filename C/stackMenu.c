#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct stack
{
	int data[5];
	int top ; 
};

int isEmpty(struct stack s)
{
	if(s.top == -1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int isFull(struct stack s)
{
	if(s.top == 4)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

void push(int data,struct stack *s)
{
	s->top++;
	s->data[s->top] = data;
	
}

int pop(struct stack *s)
{
	int data = s->data[s->top];
	s->top--;
	return(data);
}

void main()
{
	struct stack s1;
	s1.top= -1;
	int z=0;
	int choice,data;
	printf("\nWelcome to the stack application");
	while(1)
	{
		printf("\n**********************************");
		printf("\nEnter 1 for PUSH operation");
		printf("\nEnter 2 for POP operation");
		printf("\nEnter 3 to exit");
		printf("\nEnter choice : ");
		scanf("%d",&choice);
		
	
		
		switch(choice)
		{
			case 1 :
			{
				if(!(isFull(s1)))
				{
					printf("\nEnter data to be pushed : ");
					scanf("%d",&data);
					push(data,&s1);
				}
				else
				{
					printf("\n**********************************");
					printf("\n         Stack Overflow");
				}
				break;
			}
			
			case 2 :
			{
				if(!(isEmpty(s1)))
				{
					data = pop(&s1);
					printf("\n**********************************");
					printf("\n        The data is : %d",data);
				}
				else
				{
					printf("\n**********************************");
					printf("\n         Stack Underflow");
				}
				
				break;
			}
			
			case 3:
			{
				printf("\n**********************************");
				printf("\n              Thank You");
				printf("\n**********************************");
				
				exit(1);
				break;
			}
			
			default :
			{
				printf("\n**********************************");
				printf("\n     Invalid choice. Try Again    ");
				
				break;
			}
		}
	}
}