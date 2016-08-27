/*
created on 27-08-2016 by Ashish Deep Singh
C program to check whether a character is VOWEL or CONSONANT using switch
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
	char letter;
	printf("\nEnter a letter : ");
	scanf("%c",&letter);
	switch(letter)
	{
		case 'a':
		{
			printf("\nLetter is a vowel");
			break;
		}
		case 'e':
		{
			printf("\nLetter is a vowel");
			break;
		}
		case 'i':
		{
			printf("\nLetter is a vowel");
			break;
		}
		case 'o':
		{
			printf("\nLetter is a vowel");
			break;
		}
		case 'u':
		{
			printf("\nLetter is a vowel");
			break;
		}
		case 'A':
		{
			printf("\nLetter is a vowel");
			break;
		}
		case 'E':
		{
			printf("\nLetter is a vowel");
			break;
		}
		case 'I':
		{
			printf("\nLetter is a vowel");
			break;
		}
		case 'O':
		{
			printf("\nLetter is a vowel");
			break;
		}
		case 'U':
		{
			printf("\nLetter is a vowel");
			break;
		}
		default:
		{
			printf("\nLetter is a consonant");
			break;
		}
	}
}
