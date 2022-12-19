// 2D Array.
// Right Triangle.

/* Input --> 1 2 3   Output -->  _ _ 3
			 4 5 6	 			 _ 5 6
			 7 8 9		 		 7 8 9
*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j, r, c;
	printf("Enter The Row & Column for an Array = ");
	scanf("%d %d", &r, &c);

	int a[r][c];
	int p = c;

	// Input

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter number = ");
			scanf("%d", &a[i][j]);
			printf("\n");
		}
	}

	// Array Output

	printf("Output of Stored Data in that Array = \n");

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	// Right Triangle

	printf("\nRight Triangle = \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (j >= p - 1)
				printf("%d ", a[i][j]);

			else
				printf("_ ");
		}
		p--;
		printf("\n");
	}
	getch();
}
