#include<stdio.h>
#include<conio.h>

void main()
{
	int r, c, i, j,Max=0;
	printf("Enter Range of Row and Column = ");
	scanf ("%d%d", &r, &c);
	int a[r][c];
	
	//Input 2D Array
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter The Number = ");
			scanf("%d", &a[i][j]);
		}
	}
	
	//Print 2D Array
	
	printf("The Matrix is = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", a[i][j]);
		}
	printf("\n");	
	}
	// MAX PRINT 
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>Max)
			{
				Max=a[i][j];
			}
		
		}
			printf("Max value of %dth row = %d",i+1,Max);
			Max=0;
			printf("\n");
	}
	getch();
}
