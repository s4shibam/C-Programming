//Structure
//Take Multiple Cone Dimensions and Print Radius, Height, Volume and then Find the Cone with Maximum Volume.

#include<stdio.h>
#include<conio.h>

struct cone
{
	int r, h;
	float vol;
};

struct cone c[2];

void main()
{
	int i, n;
	float max;
	printf ("Enter the Range = ");
	scanf ("%d", &n);
	
	//Input
	for (i=0; i<n; i++)
	{
		printf ("\nEnter the Radius of Cone no. %d = ", i+1);
		scanf("%d", &c[i].r);
		
		printf ("\nEnter the Height of Cone no. %d = ", i+1);
		scanf("%d", &c[i].h);
		
		c[i].vol = (3.14*c[i].r*c[i].r*c[i].h)/3;
	}
	
	max= c[0].vol;
	
	//Output
	printf("--------------------------------\n");
	printf("\n         CONE VOLUME\n");
	printf("--------------------------------\n");
	printf("--------------------------------\n");
	printf("No.\tRadius\tHeight\tVolume\n");	
	printf("--------------------------------\n");
	for (i=0; i<n; i++)
	{
		printf("%d \t %d \t %d \t %.2f \n", i+1, c[i].r, c[i].h, c[i].vol);
	}
	
	printf("--------------------------------\n");
	printf("\n     CONE WITH MAX VOLUME\n");
	printf("--------------------------------\n");
	printf("--------------------------------\n");
	printf("No.\tRadius\tHeight\tVolume\n");	
	printf("--------------------------------\n");
	
	//Finding The Max
	for (i=0; i<n; i++)
	{
		if (c[i].vol>max)
		max=c[i].vol;
	}
	
	//Max Print
	for (i=0; i<n; i++)
	{
		if (max==c[i].vol)
		printf("%d \t %d \t %d \t %.2f \n", i+1, c[i].r, c[i].h, c[i].vol);
	}
	getch();	
}
