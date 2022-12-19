//2D Array.
//Store Integer data in an Array and Print that Array.

#include<stdio.h>
#include<conio.h>
void main ()
{
	int i, j, r, c; // i
	printf ("Enter The Row & Coloumn of an Array = ");
	scanf ("%d %d", &r, &c);
	
	int a[r][c];
	
	//Input
	
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf ("Enter number = ");
			scanf ("%d", &a[i][j]);
			printf("\n");
		}
	}
	
	//Output
	
	printf ("Output of Stored Data in that Array = \n");
	
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf ("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	getch();
}

