//2D Array.
//Column Wise Sum of an Array.

#include<stdio.h>
#include<conio.h>
void main ()
{
	int i, j, r, c, sum=0;
	printf ("Enter The Row & Coloumn for an Array = ");
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
	
	//Array Output
	
	printf ("Output of Stored Data in that Array = \n");
	
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf ("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	//Column wise Sum Output
	
	printf("\n");
	for (j=0; j<c; j++)
	{
		for (i=0; i<r; i++)
		{
			sum = sum + a[i][j];
		}
		printf("Row Wise Sum for the %dth Row = %d", j+1, sum);
		sum=0;
		printf("\n");
	}
	
	
	getch();
}
