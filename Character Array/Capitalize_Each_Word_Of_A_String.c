//Character Array
//Capitalise Each Word of given String and Print it.

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
	
	printf ("\n\nAfter Capitalising Each Word, your String is: ");
	
	if (x[0]>=97 && x[0]<=122)
	printf ("%c", x[0]-32);
		
	else
	printf ("%c", x[0]);
		

	for (i=1; x[i]!='\0'; i++)
	{
		if (x[i]>=97 && x[i]<=122)  // a to z
		printf ("%c", x[i]);
		
		else if (x[i]>=65 && x[i]<=90)   // A to Z
		printf ("%c", x[i]+32);
		
		else if (x[i]==' ')
		{
			if (x[i+1]>=97 && x[i+1]<=122)  // a to z
			printf (" %c", x[i+1]-32);
		
			else if (x[i+1]>=65 && x[i+1]<=90)  // A to Z
			printf (" %c", x[i+1]);
			
			i++;
		}
	}
	
	
 getch();
}

