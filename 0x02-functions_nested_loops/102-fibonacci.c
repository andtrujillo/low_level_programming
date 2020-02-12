#include <stdio.h>
/**
 * main - Entry point to our program that prints the first 50 Fibonacci numbers,
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int nextFib = 0, firstFib = 1, secondFib = 2;
	int i;
	
	printf("%lu, %lu ", firstFib, secondFib);
	for (i = 0; i < 49; i++)
	{
		nextFib = firstFib + secondFib;
		if (i < 48)
		{
			printf("%lu, ", nextFib);
		}
		else
		{
			printf("%lu", nextFib);
		}
		firstFib = secondFib;
		secondFib = nextFib;
	}
	putchar('\n');
}

