//Character Array
//Print given String with a manner where one after another letter is in Uppercase, alike rest in Lowecase.
		//Input-->   shibam saha
		//Output-->  ShIbAm SaHa

#include<stdio.h>
#include<conio.h>

void main()
{
	char x[20];
	int i, count=0;
	
	printf ("Enter a String: ");
	gets(x);

	printf ("\nYour String is: ");
	for (i=0; x[i]!='\0'; i++)
	{
		printf ("%c", x[i]);
	}
	
	printf ("\n\nOne after another letter in Uppercase Format: \n");
	
	
	
	for (i=0; x[i]!='\0'; i++, count++)
	{
		if (x[i]!=' ' && count==0)
		{
			if (x[i]>=97 && x[i]<=122) // a to z
			printf ("%c", x[i]-32);
		
			else
			printf ("%c", x[i]);
		}
		else if (x[i]!=' ' && count%2 == 0)
		{
			
			if (x[i]>=97 && x[i]<=122) // a to z
			printf ("%c", x[i]-32);
		
			else
			printf ("%c", x[i]);
		}
		
		else if (x[i]==' ')
		{
			printf (" ");
			count=1;
		}
		
		else
		{
			if (x[i]>=97 && x[i]<=122) // a to z
			printf ("%c", x[i]);
		
			else
			printf ("%c", x[i]+32);
		}
		
	}
	
	
 getch();
}

