#include "main.h"

/**
 * _abs - compute absolute value
 * @n: The integer to be worked on
 * Computes the absolute value of a number
 *
 * Return: the absolute value of a number
 */

int _abs(int n)
{
	int y;

	if (n == 0)
	{
		y = 0;
	} else if (n < 0)
	{
		y = n * -1;
	} else
	{
		y = n;
	}
	return (y);
}
