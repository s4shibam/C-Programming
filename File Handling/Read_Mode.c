// File Handling
// WAP to print the content of a file --> Read Mode (R Mode)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	// *fp--> File Pointer to point the file
	char x, fn[20];
	// x--> To store the characters of the file
	// fn[]--> To store the file name
	
	printf("Enter the file name: ");
	scanf("%[^\n]s", &fn);
	
// Code for Read Mode Or R Mode
	
	fp = fopen (fn, "r"); 	//Opening the file in the Ram under Read Mode
	if (fp == NULL)
	{
		printf("File Not Found!!");
		//If given file name is wrong or file not avaiable in the folder then exit the program with a remark.
		exit(0);
	}
	else
	{
		printf("\n");
		while(1)
		{
			x= fgetc(fp); // Assigning character value in "x" variable.
			
			if (x == EOF) // EOF--> End of the file. / When all elements are printed.
			{
				printf("\n\n-----------------------------\n");
				printf("File Displayed Successfully!!"); 
				break;
				
			}
			else
			{
				printf("%c", x);
				//sleep(1);
			}
		}
	}
	fclose(fp); // Deletes the file from Ram.

 getch();
}

