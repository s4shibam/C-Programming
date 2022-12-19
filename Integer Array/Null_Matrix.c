// 2D Array-Program
// Check the Matrix if it is Null Matrix or not.

#include <stdio.h>
#include <conio.h>

void main()
{
	int r, c, i, j, k = 1, f = 0;
	printf("Enter Range of Row and Column = ");
	scanf("%d%d", &r, &c);
	int a[r][c];

	// Input 2D Array

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter %dth The Number = ", k);
			scanf("%d", &a[i][j]);
			k++;
		}
	}

	// Print 2D Array

	printf("\nThe Matrix is = \n");

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	// Null Matrix checking and printing

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (a[i][j] != 0)
				f = 1;
			break;
		}
	}

	if (f == 1)
		printf("\nIt is NOT a Null Matrix.");

	else
		printf("\nIt is a Null Matrix.");

	getch();
}
