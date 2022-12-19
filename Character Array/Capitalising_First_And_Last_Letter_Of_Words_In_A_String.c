// Character Array
// Print given String with Capitalizing First And Last Letter of every word of it.
// Input-->   good morning india or, gOod Morning InDia ...
// Output-->  GooD MorninG IndiA

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

	printf("\n\nResult after Capitalizing First And Last Letter of every word of the given string: \n");

	if (x[0] >= 97 && x[0] <= 122)
		printf("%c", x[0] - 32);

	else
		printf("%c", x[0]);

	for (i = 1; x[i] != '\0'; i++)
	{
		if (x[i + 1] == ' ')
		{
			if (x[i] >= 97 && x[i] <= 122) // a to z
				printf("%c ", x[i] - 32);

			else if (x[i] >= 65 && x[i] <= 90) // A to Z
				printf("%c ", x[i]);

			if (x[i + 2] >= 97 && x[i + 2] <= 122) // a to z
				printf("%c", x[i + 2] - 32);

			else if (x[i + 2] >= 65 && x[i + 2] <= 90) // A to Z
				printf("%c", x[i + 2]);

			i = i + 2;
		}

		else if (x[i + 1] == '\0')
		{
			if (x[i] >= 97 && x[i] <= 122) // a to z
				printf("%c", x[i] - 32);

			else if (x[i] >= 65 && x[i] <= 90) // A to Z
				printf("%c", x[i]);
		}
		else if (x[i] >= 97 && x[i] <= 122) // a to z
			printf("%c", x[i]);

		else if (x[i] >= 65 && x[i] <= 90) // A to Z
			printf("%c", x[i] + 32);
	}

	getch();
}
