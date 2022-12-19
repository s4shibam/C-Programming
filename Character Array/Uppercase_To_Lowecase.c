// Character Array
// Converting entered Uppercase into Lowercase.

#include <stdio.h>
#include <conio.h>

void main()
{
	char x[10];
	int i;

	printf("Enter a Name in Uppercase: ");
	gets(x);

	printf("Entered Name in Lowercase: ");

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] == ' ')
			printf("%c", x[i]);
		else
			printf("%c", x[i] + 32);
	}

	getch();
}
