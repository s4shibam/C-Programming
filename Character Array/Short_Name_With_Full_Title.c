// Character Array
// Print Short Name With Full Title (No Word Limit).

#include <stdio.h>
#include <conio.h>

void main()
{
	char x[20];
	int i;

	printf("Enter a String: ");
	gets(x);

	printf("\nYour String is: ");
	for (i = 0; x[i] != '\0'; i++)
	{
		printf("%c", x[i]);
	}

	printf("\n\nShort Name With Title: ");

	if (x[0] >= 97 && x[0] <= 122)
		printf("%c.", x[0] - 32);

	else
		printf("%c.", x[0]);

	for (i = 1; x[i] != '\0'; i++)
	{
		if (x[i] == ' ')
		{
			if (x[i + 1] >= 97 && x[i + 1] <= 122) // a to z
				printf(" %c.", x[i + 1] - 32);

			else if (x[i + 1] >= 65 && x[i + 1] <= 90) // A to Z
				printf(" %c.", x[i + 1]);

			i++;
		}
	}
	printf("\b");

	for (i = 0; x[i] != '\0'; i++)
	{
	}

	for (; x[i] != ' '; i--)
	{
	}

	for (i = i + 2; x[i] != '\0'; i++)
	{
		if (x[i] >= 97 && x[i] <= 122) // a to z
			printf("%c", x[i]);

		else if (x[i] >= 65 && x[i] <= 90) // A to Z
			printf("%c", x[i] + 32);
	}

	getch();
}
