// Character Array
// Converting entered Case into its Opposite case. "Case change Vice Versa"

#include <stdio.h>
#include <conio.h>

void main()
{
	char x[10];
	int i;

	printf("Enter a Name: ");
	gets(x);

	printf("Entered Name after Case change (Vice Versa): ");

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 97 && x[i] <= 122)
			printf("%c", x[i] - 32);

		else if (x[i] >= 65 && x[i] <= 90)
			printf("%c", x[i] + 32);

		else
			printf("%c", x[i]);
	}

	getch();
}
