// 2D Array-Program
// Check the Matrix if it is Orthogonal Matrix or not.

#include <stdio.h>
#include <conio.h>

void main()
{
	int n, i, j, f = 0;
	printf("Enter Range for Square Matrix = ");
	scanf("%d", &n);
	int a[n][n], b[n][n], o[n][n];

	// Input 2D Array

	printf("\n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Enter The Number = ");
			scanf("%d", &a[i][j]);
		}
	}

	// Print 2D Array

	printf("\nThe Matrix is = \n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	// Transpose Matrix

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			b[i][j] = a[j][i];
		}
	}

	// Print Transpose Matrix

	printf("\nThe Transpose Matrix is = \n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	// Matrix * Transpose Matrix

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			o[i][j] = a[i][j] * b[i][j];
		}
	}

	// Print Matrix * Transpose Matrix

	printf("\nMatrix * Transpose Matrix is = \n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", o[i][j]);
		}
		printf("\n");
	}

	// Orthogonal or Not

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j && o[i][j] != 1)
			{
				f = 1;
				break;
			}
			else if (i != j && o[i][j] != 0)
			{
				f = 1;
				break;
			}
		}
	}

	if (f == 0)
		printf("\nGiven Matrix is an Orthogonal Matrix.");

	else
		printf("\nGiven Matrix is NOT an Orthogonal Matrix.");

	getch();
}
