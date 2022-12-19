//Character Array
//Converting entered Lowercase into Uppercase.

#include<stdio.h>
#include<conio.h>

void main()
{
	char x[10];
	int i;
	
	printf ("Enter a Name in Lowercase: ");
	gets(x);
	
	printf ("Entered Name in Uppercase: ");
	
	for (i=0; x[i]!='\0'; i++)
	{	
		if (x[i]==' ')
		printf ("%c", x[i]);
		else
		printf ("%c", x[i]-32);
	}
	
 getch();
}

