//Character Array
//Print Acromatic Form of Given String With N no. of Words.

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
	
	printf ("\n\nAcromatic Form of the Name is: ");
	
	if (x[0]>=97 && x[0]<=122)
	printf ("%c.", x[0]-32);
		
	else
	printf ("%c.", x[0]);
	
		for (i=1; x[i]!='\0'; i++)
	{
		if (x[i]==' ')
		{
			if (x[i+1]>=97 && x[i+1]<=122)  // a to z
			printf (" %c.", x[i+1]-32);
		
			else if (x[i+1]>=65 && x[i+1]<=90)  // A to Z
			printf (" %c.", x[i+1]);
			
			i++;
		}
	}
	
 getch();
}
 
