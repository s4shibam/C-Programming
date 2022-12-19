//Stucture
//Creating a Student Database and Priting Database, also Searching data by ID, Section, Joining Year.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct std
{
	int id, cls, jy;
	char name[10], sec[1];
};

void id(int);
void sec(char[]);
void year(int);

struct std s[2];

int i, n, sid, sjy;
char ssec[1];

void main()
{
	printf ("Enter the Strength of Students = ");
	scanf("%d", &n);
	printf("\n");
	
	//Input
	
	for (i=0; i<n; i++)
	{
		printf ("\nEnter Student ID = ");
		scanf("%d", &s[i].id);
		
		printf ("\nEnter Student Name = ");
		scanf("%s", &s[i].name);
		
		printf ("\nEnter Student Class = ");
		scanf("%d", &s[i].cls);
		
		printf ("\nEnter Student Section = ");
		scanf("%s", &s[i].sec);
		
		printf ("\nEnter Student Join Year = ");
		scanf("%d", &s[i].jy);
	}
	
	//Output
	
	printf("\n--------------------------------------------\n");
	printf("\n             STUDENT DATABASE             \n\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("ID \t Name \t Class \t Sec \t JoinYr\n");	
	printf("--------------------------------------------\n");
	
	for (i=0; i<n; i++)
	{
		printf("%d \t %s \t %d \t %s \t %d \n", s[i].id, s[i].name, s[i].cls, s[i].sec, s[i].jy);
	}
	
	//Searching
	while(1)
	{
		printf ("\n 1. Search by ID \n 2. Search by Section \n 3. Search by Year \n");
		
		int opt;
		printf("\nEnter your choice no. = ");
		scanf ("%d", &opt);
		printf("\n");
		switch (opt)
		{
			case 1:
				printf ("\nEnter the ID to search = ");
				scanf ("%d", &sid);
				id(sid);
				break;
				
			case 2:
				printf ("\nEnter the Section to sort = ");
				scanf ("%s", &ssec);
				sec(ssec);
				break;
				
			case 3:
				printf ("\nEnter the Joining Year to sort = ");
				scanf ("%d", &sjy);
				year(sjy);
				break;
				
			default:
				exit(0);
				
		}
		
	}
	
	getch();
}

void id (int sid)
{
	printf("\n--------------------------------------------\n");
	printf("ID \t Name \t Class \t Sec \t JoinYr\n");	
	printf("--------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		if (s[i].id==sid)
		printf("%d \t %s \t %d \t %s \t %d \n", s[i].id, s[i].name, s[i].cls, s[i].sec, s[i].jy);
	}
}

void sec(char ssec[])
{
	printf("\n--------------------------------------------\n");
	printf("         STUDENTS IN SECTION %s         \n", ssec);
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("ID \t Name \t Class \t Sec \t JoinYr\n");	
	printf("--------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		if (s[i].sec==ssec)
		printf("%d \t %s \t %d \t %s \t %d \n", s[i].id, s[i].name, s[i].cls, s[i].sec, s[i].jy);
	}
}

void year(int sjy)
{
	printf("\n--------------------------------------------\n");
	printf("         STUDENTS JOINED ON YEAR %d         \n", sjy);
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("ID \t Name \t Class \t Sec \t JoinYr\n");	
	printf("--------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		if (s[i].jy==sjy)
		printf("%d \t %s \t %d \t %s \t %d \n", s[i].id, s[i].name, s[i].cls, s[i].sec, s[i].jy);
	}
}
