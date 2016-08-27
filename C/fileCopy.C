/*
created on 25-08-2016 by Ashish Deep Singh
C program to copy file from source to destination
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char sourceFile[20],destinationFile[30],ch;
	FILE *sourceP, *destinationP;
	
	printf("\nEnter the source file : ");
	scanf("%s",sourceFile);
	
	sourceP = fopen(sourceFile,"r");
	
	if( sourceP == NULL )
	{
		fclose(sourceP);
		printf("\nSource does not exist.");
		exit(0);
	}
	printf("\nEnter the destination file : ");
	scanf("%s",destinationFile);
	
	destinationP = fopen(destinationFile,"r");
	
	fclose(destinationP);
	
	if( destinationP != NULL )
	{
		printf("\nFile Exists. Overwrite Y or N ? : ");
		fflush(stdin);
		ch = getchar();
		if( ch == 'n'|| ch == 'n' )
		{
			fclose(sourceP);
			exit(0);
		}
	}
	destinationP = fopen(destinationFile,"w");
	
	while( (ch = getc(sourceP))!= EOF )
	{
		fputc(ch,destinationP);
	}
	
	fclose(sourceP);
	fclose(destinationP);
	
	printf("\nFile Copied");
	return(0);
}