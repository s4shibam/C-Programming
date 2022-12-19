//Character Array
//Reverse the given String and Print it.

#include<stdio.h>
#include<conio.h>

void main()
{
	char x[20];
	int i;
	
	printf ("Enter a String: ");
	gets(x);

	printf ("\nYour String is: ");
	for (i=0; x[i]!='\0'; i++)
	{
		printf ("%c", x[i]);
	}
	
	printf ("\n\nString in Reverse: ");
	
	for (; i>=0; i--)
	{
		printf ("%c", x[i]);
	}

 getch();
}

