#include "main.h"

/**
 * print - prints intgers
 * @n: the integer
 * Prints integers using _putchar
 *
 * Return: void
 */

void print(int n)
{
	/*
	 * If number is smaller than 0, put a - sign
	 * and change number to positive
	 */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Remove the last digit and recur */
	if (n / 10)
	print(n / 10);

	/* Print the last digit */
	_putchar((n % 10) + '0');
}

/**
 * print_to_98 - prints intgers to 98
 * @n: the integer to start from
 * Prints integers to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			print(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			} else
				_putchar('\n');
			n++;
		}
	} else
	{
		while (n > 97)
		{
			print(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			} else
			_putchar('\n');
			n--;
		}
	}
}
