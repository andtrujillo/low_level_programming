#include "holberton.h"
/**
 * print_triangle - Function that prints a triangle using pound signs
 * @size: amount of pound signs that will be printed or size of triangle
 * Return: none (void)
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}

		for (k = 0; k < i; k++)
		{
			_putchar(35);
		}

		_putchar('\n');
	}
}
