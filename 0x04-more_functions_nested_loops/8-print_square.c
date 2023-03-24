#include "main.h"

/**
 * print_square - prints a square
 * @n: number input
 * Prints a square using #
 * Return: void
 */
void print_square(int n)
{
	if (n > 0)
	{
		int x = 0;

		while (x < n)
		{
			int y = 0;

			while (y < n)
			{
				_putchar('#');
				y++;
			}
			if (x != (n - 1))
				_putchar('\n');
			x++;
		}
	}
	_putchar('\n');
}
