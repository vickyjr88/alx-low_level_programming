#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - gets the lat digit of a number
 * @n: The integer to be worked on
 * Gets the last digit of a number
 *
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		x = -(n % 10);
	else
		x = n % 10;

	_putchar('0' + x);
	return (x);
}
