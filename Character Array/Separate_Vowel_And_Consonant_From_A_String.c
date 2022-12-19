//Character Array.
//Separate and print "Vowel and Consonant" from given String.

#include<stdio.h>
#include<conio.h>
void main ()
{
	char x[20], v[20], c[20];
	int i,j,k;
	printf ("Enter A Name = ");
	gets (x);
	
	for (i=0, j=0; x[i]!='\0';i++)
	{
		if (x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='A' ||x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U')
		{
			v[j]=x[i];
			j++;
		}
		
		else if (x[i]!=' ')
		{
			
		}
		
		else
		{
			c[k]=x[i];
			k++;
		}
	}
	v[j]='\0';
	c[k]='\0';
	
	printf ("\nVowels are = ");
	for (j=0; v[j]!='\0';j++)
	{
		printf ("%c", v[j]);
	}
	
	printf ("\nConsonants are = ");
	for (k=0; c[k]!='\0'; k++)
	{
		printf ("%c", c[k]);
	}

	getch();
}
