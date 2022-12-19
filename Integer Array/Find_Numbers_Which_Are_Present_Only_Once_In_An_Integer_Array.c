// Integer Array
// Find and Print the numbers, those who are present only once in the user defined Integer Array.

#include<stdio.h>
#include<conio.h>

void main()
{
	int n, i, j, k, count=0;
	printf ("Enter Range = ");
	scanf ("%d", &n);
	int a[n], rep[n];
	
	for (i=0; i<n; i++)
	{
		printf ("Enter no. = ");
		scanf ("%d", &a[i]);
	}
	
	printf ("Your Integer Array = ");
	for (i=0; i<n; i++)
	{
		printf ("%d ", a[i]);
	}
	printf ("\n");

	printf ("Numbers, which are present only once in above Array are = ");
	for (i=0; i<n; i++)
	{
			count=0;
			for (j=0; j<n; j++)
			{
				if (i!=j)
				{
					if(a[i]==a[j])
					count++;
				}
			}
			if (count==0)
				{
					printf ("%d ", a[i]);
					k++;
				}

	}
	if (k==0)
	printf("Null");

 getch();
}

