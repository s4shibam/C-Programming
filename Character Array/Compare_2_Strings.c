// Character Array
// Compare 2 Strings to Check if they are same string of not (Case Sensitive).

#include <stdio.h>
#include <conio.h>

void main()
{
	char x[10], y[10];
	int i, j, f = 0;

	printf("Enter a String: ");
	gets(x);

	printf("Enter another String: ");
	gets(y);

	printf("\n1st String is: ");
	for (i = 0; x[i] != '\0'; i++)
	{
		printf("%c", x[i]);
	}

	printf("\n2nd String is: ");
	for (j = 0; y[j] != '\0'; j++)
	{
		printf("%c", y[j]);
	}

	if (i >= j)
	{

		for (i = 0; x[i] != '\0'; i++)
		{
			if (x[i] != y[i])
			{
				f = 1;
				break;
			}
		}
	}

	else
	{

		for (i = 0; y[i] != '\0'; i++)
		{
			if (y[i] != x[i])
			{
				f = 1;
				break;
			}
		}
	}

	if (f == 0)
		printf("\nBoth Strings are Same.\n");

	else
		printf("\nBoth Strings are Not Same.\n");

	getch();
}
