// File Handling
// WAP to Copy the content from a source file and append it to a new file.


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	FILE *sfp, *dfp;
	// *fp--> File Pointer to point the file
	char ch, sfn[20], dfn[20];
	// x--> To store the characters of the file
	// fn[]--> To store the file name
	
	printf("Enter the Source file name: ");
	scanf("%[^\n]s", &sfn);
	
	printf("Enter the Destination file name: ");
	scanf("%s", &dfn);
	
	sfp = fopen (sfn, "r"); 	//Opening the file in the Ram under Read Mode
	dfp = fopen (dfn, "a"); 	//Opening the file in the Ram under Append Mode

	if (sfp == NULL)
	{
		printf("Error Occured!!\n");
		//break;
	}
	
	else
	{
		while(1)
		{
			ch = fgetc(sfp);
			if(ch == EOF)
			{
				printf("\n\n--------------------------\n");
				printf("File Copied Successfully!!"); 
				break;
			}
			else
			{
				fputc(ch, dfp);
			}
		}
	}
	fclose(sfp);
	fclose(dfp);
	
 getch();
}

