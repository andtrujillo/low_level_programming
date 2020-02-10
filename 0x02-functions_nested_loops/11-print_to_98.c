#include "holberton.h"
/**
 * print_to_98 - Function that prints all natural numbers from n to 98
 * @num: integer
 * Return: none
 */
void print_to_98(int num_)
{
	int hasPrinted = 0;
	
	if (hasPrinted)
	{
		_putchar(',');
		_putchar(' ');
	}
	
	if (num_ > 98)
	{
		for (;num_ > 98; num_--)
		{
			if (num_ > 100)
				_putchar( ((num_ /10)/10) + '0');

			_putchar( ((num_ /10) + '0');
			_putchar( ((num_ % 10) + '0');
		}
	}else
	{
		for (; num_ < 98; num_++)
		{
			_putchar( (num_ / 10) + '0');
			_putchar( (num_ % 10) + '0');

		}
	}
	hasPrinted = 1;
}