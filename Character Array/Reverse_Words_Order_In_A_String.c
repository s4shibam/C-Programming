//Character Array
//Reverse Word's Order in a String and Print accordingly.
			//Input --> aaa bbb ccc
			//Output --> Ccc Bbb Aaa

#include<stdio.h>
#include<conio.h>

void main()
{
	char x[20];
	int i, j=0, k=0;
	
	printf ("Enter a String: ");		//aaa bbb ccc
	gets(x);

	printf ("\nYour String is: ");
	for (i=0; x[i]!='\0'; i++)
	{
		printf ("%c", x[i]);
	}
	
	printf ("\nString After Reversing Word's Order: ");
	
	for (i=0; x[i]!=' '; i++)
	{
		j++;
	}
	k=j;
	
	for (i=i+1; x[i]!='\0'; i++)
	{
		j++;
	}
	
	//ccc
	for (j=j+1; x[j]!='\0'; j++)
	{
		if (x[j]==' ')
		{
			if (x[j+1]>='a' && x[j+1]<='z')
			printf ("%c", x[j+1]-32);
			
			else
			printf ("%c", x[j+1]-32);
			
			j++;
		}
		else
		printf ("%c", x[j]);
	}
	
	//bbb
	for(; k<=i; k++)
	{
		if (x[k]==' ')
		{
			printf ("%c", x[k]);
			
			if (k==i)
			break;
			
			if (x[k+1]>=97 && x[k+1]<=122)
			printf ("%c", x[k+1]-32);
			
			else
			printf ("%c", x[k+1]);
			
			k++;
		}
		else
		printf ("%c", x[k]);
	}
	
	//aaa
	for (i=0; x[i]!='\0'; i++)
	{
	
		if (i==0)
		{
			if (x[i+1]>=97 && x[i+1]<=122)
			printf ("%c", x[i+1]-32);
		
			else
			printf ("%c", x[i+1]);
		
			i++;
		}
		else
		printf ("%c", x[i]);
	}
 getch();
}

