//Character Array.
//Changing vowel with its very next vowel in a string.

#include<stdio.h>
#include<conio.h>
void main ()
{
	printf ("Changing vowel with its very next vowel in a string.\n");
	char x[20];
	int i;
	printf ("\nEnter A Name = ");
	gets (x);
	
	printf ("\nAfter changing given vowel with its very next vowel, the given string will be = ");
	for (i=0; x[i]!='\0'; i++)
	{
		if (x[i]=='a')
		printf ("e");
		else if (x[i]=='A')
		printf ("E");
		else if (x[i]=='e')
		printf ("i");
		else if (x[i]=='E')
		printf ("I");
		else if (x[i]=='i')
		printf ("o");
		else if (x[i]=='I')
		printf ("O");
		else if (x[i]=='o')
		printf ("u");
		else if (x[i]=='O')
		printf ("U");
		else if (x[i]=='u')
		printf ("a");
		else if (x[i]=='U')
		printf ("A");
		else
		printf ("%c",x[i]);
	}
	printf (".");
	getch();
}
