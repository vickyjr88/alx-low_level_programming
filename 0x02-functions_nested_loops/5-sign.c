#include "main.h"

/**
 * print_sign - prints the sign of an integer
 * @n: The integer to be checked
 * Checks if character is lowercase
 *
 * Return: 1 if the number is positive, -1 if it is negative. 0 otherwise.
 */

int print_sign(int n)
{
	char x;
	int y;

	if (n == 0)
	{
		x = '0';
		y = 0;
	} else if (n < 0)
	{
		x = '-';
		y = -1;
	} else
	{
		x = '+';
		y = 1;
	}
	_putchar(x);
	return (y);
}
