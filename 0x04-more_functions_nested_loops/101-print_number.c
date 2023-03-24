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
 * print_number - prints interger
 * @n: input integer
 * Prints integer
 *
 * Return: void
 */

void print_number(int n)
{
	print(n);
	_putchar('\n');
}
