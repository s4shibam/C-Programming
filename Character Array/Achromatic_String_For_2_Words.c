//Character Array
//Acromatic String Printing For 2 Words.
		//Input--> Shibam Saha
		//Output--> S. S.

#include<stdio.h>
#include<conio.h>

void main()
{
	char x[10];
	int i;
	
	printf ("Enter Name and Title: ");
	gets (x);
	
	printf("Achromatic Form of the Name is: ");
	
	if(x[0]>='a' && x[0]<='z') //(x[0]>=97 && x[0]<=122)
	printf ("%c. ",x[0]-32);
	
	else
	printf ("%c. ",x[0]);

	
	for (i=0; x[i]!=' '; i++)
	{
		
	}
	i++;
	
	if (x[0]>=97 && x[0]<=122) //(x[0]>='a' && x[0]<='z')
	printf ("%c.\n",x[i]-32);
	
	else
	printf ("%c.\n",x[i]);
	
	getch();
}
