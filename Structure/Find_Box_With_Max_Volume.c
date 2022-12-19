// Structure
// Take Multiple Box Dimensions and Print Length, Breadth, Height, Volume and then Find the Box with Maximum Volume.

#include <stdio.h>
#include <conio.h>

struct box
{
	int l, b, h, vol;
};

struct box box[2];

void main()
{
	int i, n, max;
	printf("Enter the Range = ");
	scanf("%d", &n);

	// Input
	for (i = 0; i < n; i++)
	{
		printf("\nEnter the Length of Box no. %d = ", i + 1);
		scanf("%d", &box[i].l);

		printf("\nEnter the Breadth of Box no. %d = ", i + 1);
		scanf("%d", &box[i].b);

		printf("\nEnter the Height of Box no. %d = ", i + 1);
		scanf("%d", &box[i].h);

		box[i].vol = box[i].l * box[i].b * box[i].h;
	}

	max = box[0].vol;

	// Output
	printf("--------------------------------------------\n");
	printf("\n             BOX VOLUME             \n\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("No.\tLength\tBreadth\tHeight\tVolume\n");
	printf("--------------------------------------------\n");
	for (i = 0; i < n; i++)
	{
		printf("%d \t %d \t %d \t %d \t %d \n", i + 1, box[i].l, box[i].b, box[i].h, box[i].vol);
	}

	printf("--------------------------------------------\n");
	printf("\n           BOX WITH MAX VOLUME           \n\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("No.\tLength\tBreadth\tHeight\tVolume \n");
	printf("--------------------------------------------\n");

	// Finding The Max
	for (i = 0; i < n; i++)
	{
		if (box[i].vol > max)
			max = box[i].vol;
	}

	// Max Print
	for (i = 0; i < n; i++)
	{
		if (max == box[i].vol)
			printf("%d \t %d \t %d \t %d \t %d \n", i + 1, box[i].l, box[i].b, box[i].h, box[i].vol);
	}
	getch();
}
