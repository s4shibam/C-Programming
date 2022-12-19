// All type of Number related Operations, Checking and Number Series Printing.
// Function 3rd Type: void function (int, int) & Parameter passing.

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

// Arithmetic Progression (AP) is a sequence of numbers in order in which the difference of any two consecutive numbers is a constant value.
void apSeries(int, int, int);

// In the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself.
void armstrong(int);

// A number is said to be Auto Polymorphic Number if the remainder is that same number when its square is divided by 10 or 100.
void autoPolymorphic(int);

// A number is said to be Buzz Number if it ends with 7 OR is divisible by 7.
void buzz(int);

// A number is said to be Even Number if it is divisible by 2 else it is an Odd Number.
void evenOrOdd(int);

// The factorial of a number is the function that multiplies the number by every natural number below it.
void factorial(int);

// The factors of a number are defined as the numbers which give the original number on multiplying the two factors.
void factors(int);

// In case of Fibonacci Series, next number is the sum of previous two numbers. The first two numbers of Fibonacci Series are 0 and 1.
void fibonacci(int);

// A series of numbers obtained by multiplying or dividing each preceding term, such that there is a common ratio between the terms (that is not equal to 0) is the geometric progression
void gpSeries(int, int, int);

// An integer number in base 10 which is divisible by the sum of its digits is said to be a Harshad Number.
void harshad(int);

// Integer Numbers are 2 types. #1. Positive #2. Negative but "0" is neither Positive nor Negative.
void integerType(int);

// A Krishnamurthy Number is a number whose sum of the factorial of digits is equal to the number itself.
void krishnamurthy(int);

// A number is said to be a magic number, if the sum of its digits are calculated till a single digit recursively by adding the sum of the digits after every addition.
// If the single digit comes out to be 1, then the number is a Magic Number.
void magic(int);

// Multiplication Table is a list of multiples of a particular number.
void multiplicationTable(int, int);

// Natural numbers are a part of the number system, including all the positive integers from 1 to infinity.
void natural(int);

// A Neon Number is a number where the sum of digits of square of the number is equal to the number.
void neon(int);

// A Palindromic Number is a number that remains the same when its digits are reversed.
void palindrome(int);

// A number is a Perfect Number if it is equal to sum of its proper divisors, that is, sum of its positive divisors excluding the number itself.
void perfect(int);

// A number is said to be Prime Number if the number is only divisible by 1 and that number.
void prime(int);

// Reversed number is the result after reversing a given number.
void reverse(int);

// A spy number is a number where the sum of its digits equals the product of its digits.
void spy(int);

// The tribonacci series is a generalization of the Fibonacci sequence where each term is the sum of the three preceding terms.
// The first 3 numbers of this series are 0, 0, 1.
void tribonacci(int);

int n, ft, cd, t;
void main()
{

	while (1)
	{
		printf("\n\n**************   NUMBER  OPERATIONS   **************  \n");
		printf("Press a number to select a type of Number Operation!\n\n");
		printf(" 1. Arithmetic Progression (AP) Series\n");
		printf(" 2. Armstrong Number\n");
		printf(" 3. Auto Polymorphic Number\n");
		printf(" 4. Buzz Number\n");
		printf(" 5. Even Odd Number\n");
		printf(" 6. Factorial of a Number\n");
		printf(" 7. Factors of a Number\n");
		printf(" 8. Fibonacci Series\n");
		printf(" 9. Geometric Progression (GP) Series\n");
		printf("10. Harshad Number\n");
		printf("11. Integer Type of a Number\n");
		printf("12. Krishnamurthy Number\n");
		printf("13. Magic Number\n");
		printf("14. Multiplication Table\n");
		printf("15. Natural Number & Sum\n");
		printf("16. Neon Number\n");
		printf("17. Palindromic Number\n");
		printf("18. Perfect Number\n");
		printf("19. Prime Number\n");
		printf("20. Reverse Number\n");
		printf("21. Spy Number\n");
		printf("22. Tribonacci Series\n");

		int opt;
		printf("\nEnter your choice no. = ");
		scanf("%d", &opt);
		printf("\n");
		switch (opt)
		{
		case 1:
			printf("Enter required details to get Arithmetic Progression (AP) Series.\n");
			printf("Enter the First Term for the AP Series = ");
			scanf("%d", &ft);
			printf("\nEnter the Common Difference for the AP Series = ");
			scanf("%d", &cd);
			printf("\nEnter the Range for the AP Series = ");
			scanf("%d", &n);
			apSeries(ft, cd, n);
			break;

		case 2:
			printf("Enter a three digit Number to check Armstrong number = ");
			scanf("%d", &n);
			armstrong(n);
			break;

		case 3:
			printf("Enter the Number to check Auto Polymorphic Number = ");
			scanf("%d", &n);
			autoPolymorphic(n);
			break;

		case 4:
			printf("Enter the Number to check Buzz Number = ");
			scanf("%d", &n);
			buzz(n);
			break;

		case 5:
			printf("Enter a Number to check Even or Odd = ");
			scanf("%d", &n);
			evenOrOdd(n);
			break;

		case 6:
			printf("Enter a Number to get its Factorial = ");
			scanf("%d", &n);
			factorial(n);
			break;

		case 7:
			printf("Enter a Number to print its Factors = ");
			scanf("%d", &n);
			factors(n);
			break;

		case 8:
			printf("Enter a Range to print the Fibonacci Series = ");
			scanf("%d", &n);
			fibonacci(n);
			break;

		case 9:
			printf("Enter required details to get Geometric Progression (GP) Series.\n");
			printf("Enter the First Term for the GP Series = ");
			scanf("%d", &ft);
			printf("\nEnter the Common Ratio for the GP Series = ");
			scanf("%d", &cd);
			printf("\nEnter the Range for the GP Series = ");
			scanf("%d", &n);
			gpSeries(ft, cd, n);
			break;

		case 10:
			printf("Enter the Number to check Harshad Number = ");
			scanf("%d", &n);
			harshad(n);
			break;

		case 11:
			printf("Enter an Integer Number = ");
			scanf("%d", &n);
			integerType(n);
			break;

		case 12:
			printf("Enter the Number to check Krishnamurthy Number = ");
			scanf("%d", &n);
			krishnamurthy(n);
			break;

		case 13:
			printf("Enter the Number to check Magic Number = ");
			scanf("%d", &n);
			magic(n);
			break;

		case 14:
			printf("Multiplication Table of the Number = ");
			scanf("%d", &t);
			printf("Enter the Range of the Table  = ");
			scanf("%d", &n);
			multiplicationTable(t, n);
			break;

		case 15:
			printf("Enter the Range to print Natural Numbers = ");
			scanf("%d", &n);
			natural(n);
			break;

		case 16:
			printf("Enter the Number to check Neon Number = ");
			scanf("%d", &n);
			neon(n);
			break;

		case 17:
			printf("Enter the Number to check Palindromic Number = ");
			scanf("%d", &n);
			palindrome(n);
			break;

		case 18:
			printf("Enter the Number to check Perfect Number = ");
			scanf("%d", &n);
			perfect(n);
			break;

		case 19:
			printf("Enter the Number to check Prime Number = ");
			scanf("%d", &n);
			prime(n);
			break;

		case 20:
			printf("Enter the Number to Reverse the Number = ");
			scanf("%d", &n);
			reverse(n);
			break;

		case 21:
			printf("Enter the Number To check Spy Number = ");
			scanf("%d", &n);
			spy(n);
			break;

		case 22:
			printf("Enter a Range to print the Tribonacci Series = ");
			scanf("%d", &n);
			tribonacci(n);
			break;

		default:
			exit(0);
		}
	}
	getch();
}

void apSeries(int ft, int cd, int n)
{
	int i, num = ft, sum;
	printf("\nAP Series till %dth term is %d ", n, ft);
	for (i = 1; i <= n - 1; i++)
	{
		num = num + cd;
		printf("%d ", num);
	}
	sum = n * ((2 * ft) + (n - 1) * cd) / 2;
	printf("\nSum of This AP Series is %d", sum);
}
void armstrong(int n)
{
	int m, rem, s = 0;
	m = n;
	for (; n > 0; n /= 10) // (n=n/10) is as same as (n/=10)
	{
		rem = n % 10;
		s += (rem * rem * rem); // s=s+(rem*rem*rem)
	}

	if (s == m)
		printf("%d is an Armstrong Number.\n", m);

	else
		printf("%d is not an Armstrong Number.\n", m);
}

void autoPolymorphic(int n)
{
	if (n * n % 10 == n || n * n % 100 == n)
		printf("%d is an Auto Polymorphic Number.\n", n);
	else
		printf("%d is Not an Auto Polymorphic Number.\n", n);
}

void buzz(int n)
{
	if (n % 10 == 7 || n % 7 == 0)
		printf("%d is a Buzz Number.\n", n);
	else
		printf("%d is Not a Buzz Number.\n", n);
}

void evenOrOdd(int n)
{
	if (n % 2 == 0)
		printf("%d is Even Number.\n", n);
	else
		printf("%d is Odd Number.\n", n);
}

void factorial(int n)
{
	int fact, i;
	for (i = 1; i <= n; i++)
	{
		fact *= i;
	}
	printf("Factorial of the Number %d is %d.\n", n, fact);
}
void factors(int n)
{
	int i;
	printf("Factors of the given number %d are = ", n);
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			printf("%d ", i);
	}
	printf("\n");
}

void fibonacci(int n)
{
	int i, a = 0, b = 1, c;
	printf("Fibonacci Series till %dth term = %d ", n, a);
	for (i = 0; i <= n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);
	}
	printf("\n");
}

void gpSeries(int ft, int cd, int n)
{
	int i, num = ft, sum = 0;
	printf("\nGP Series till %dth term is ", n);
	for (i = 1; i <= n; i++)
	{
		num = ft * pow(cd, i - 1);
		printf("%d ", num);
		sum += num;
	}
	printf("\nSum of This GP Series is %d", sum);
}

void harshad(int n)
{
	int m, i, rem, s = 0;
	m = n;
	for (; n > 0; n /= 10)
	{
		rem = n % 10;
		s += rem;
	}

	if (m % s == 0)
		printf("%d is a Harshad Number.\n", m);
	else
		printf("%d is Not a Harshad Number.\n", m);
}

void integerType(int n)
{
	if (n > 0)
		printf("This is a Positive Integer.\n");
	else if (n < 0)
		printf("This is a Negative Integer.\n");
	else if (n == 0)
		printf("This is a Zero (0).\n");
}
void krishnamurthy(int n)
{
	int m, j, rem, s = 0, f = 1;
	for (m = n; n > 0; n /= 10)
	{
		rem = n % 10;
		for (j = 1; j <= rem; j++)
		{
			f = f * j;
		}
		s += f;
		f = 1;
	}
	if (s == m)
		printf("%d is a Krishnamurthy Number.\n", m);
	else
		printf("%d is Not a Krishnamurthy Number.\n", m);
}

void magic(int n)
{
	int m = n, sum = 0;
	for (; n > 0 || sum > 9; n /= 10)
	{
		if (n == 0)
		{
			n = sum;
			sum = 0;
		}

		sum += n % 10; // Remainder = n%10
	}
	if (sum == 1)
		printf("%d is a Magic Number.\n", m);
	else
		printf("%d is Not a Magic Number.\n", m);
}

void multiplicationTable(int t, int n)
{
	int i;
	printf("Table of %d till the range %d --->\n", t, n);
	for (i = 0; i <= n; i++)
	{
		printf("%d * %d = %d\n", t, i, t * i);
	}
}

void natural(int n)
{
	int i, sum = 0;
	printf("Natural Numbers upto %dth Term are = ", n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", i);
		sum += i;
	}
	printf("\nSum of the Natural Numbers upto %dth Term is = %d.\n", n, sum);
}
void neon(int n)
{
	int m, sq, rem, s = 0;
	sq = n * n;
	m = n;
	for (; sq > 0; sq /= 10)
	{
		rem = sq % 10;
		s += rem;
	}
	if (m == s)
		printf("%d is a Neon Number.\n", m);
	else
		printf("%d is Not a Neon Number.\n", m);
}

void palindrome(int n)
{
	int m, rem, rev = 0;
	m = n;
	for (; n > 0; n /= 10)
	{
		rem = n % 10;
		rev = (rev * 10) + rem;
	}
	if (m == rev)
		printf("%d is a Palindromic Number.\n", m);
	else
		printf("%d is Not a Palindromic Number.\n", m);
}

void perfect(int n)
{
	int i, s = 0;
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
			s += i;
	}
	if (s == n)
		printf("%d is a Perfect Number.\n", n);
	else
		printf("%d is Not a Perfect Number.\n", n);
}

void prime(int n)
{
	int i, f = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			f == 1;
	}

	if (f == 0)
		printf("%d is Prime Number.\n", n);
	else
		printf("%d is Not A Prime Number.\n", n);
}

void reverse(int n)
{
	int rem, rev = 0;
	for (; n > 0; n /= 10)
	{
		rem = n % 10;
		rev = (rev * 10) + rem;
	}
	printf("The Reversed Number is %d\n", rev);
}

void spy(int n)
{
	int m = n, sod = 0, pod = 1;
	for (; n > 0; n /= 10)
	{
		sod += n % 10;
		pod *= n % 10;
	}
	if (sod == pod)
		printf("%d is a Spy number.\n", m);
	else
		printf("%d is Not a Spy number.\n", m);
}

void tribonacci(int n)
{
	int i, a = 0, b = 0, c = 1, d;
	printf("Tribonacci Series till %dth term = %d %d %d ", n, a, b, c);
	for (i = 0; i < n - 3; i++)
	{
		d = a + b + c;
		a = b;
		b = c;
		c = d;
		printf("%d ", d);
	}
	printf("\n");
}

/*
	Output:

**************   NUMBER  OPERATIONS   **************
Press a number to select a type of Number Operation!

 1. Arithmetic Progression (AP) Series
 2. Armstrong Number
 3. Auto Polymorphic Number
 4. Buzz Number
 5. Even Odd Number
 6. Factorial of a Number
 7. Factors of a Number
 8. Fibonacci Series
 9. Geometric Progression (GP) Series
10. Harshad Number
11. Integer Type of a Number
12. Krishnamurthy Number
13. Magic Number
14. Multiplication Table
15. Natural Number & Sum
16. Neon Number
17. Palindromic Number
18. Perfect Number
19. Prime Number
20. Reverse Number
21. Spy Number
22. Tribonacci Series

Enter your choice no. = 8

Enter a Range to print the Fibonacci Series = 10
Fibonacci Series till 10th term = 0 1 2 3 5 8 13 21 34 55

*/