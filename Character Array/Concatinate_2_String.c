//Character Array
//Concatinate Two String.

#include<stdio.h>
#include<conio.h>

void main()
{
	char x[10], y[10], c[16];
	int i, j;
	
	printf ("Enter 1st String: ");
	gets(x);
	
	printf ("Enter 2nd String: ");
	gets(y);
	
	for (i=0; x[i]!='\0'; i++)
	{
		c[i]=x[i];
	}
	
	for (j=i+1, i=0; y[i]!='\0'; i++, j++)
	{
		c[j]=y[i];
	}
	c[j+1]='\0';
	
	printf ("\nResult After Concatination: ");
	
	for (i=0; c[i]!='\0'; i++)
	{
		printf ("%c", c[i]);
	}
 getch();
}

