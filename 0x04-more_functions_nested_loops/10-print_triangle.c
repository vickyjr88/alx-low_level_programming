#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: number input
 * Prints a triangle using #
 * Return: void
 */
void print_triangle(int n)
{
	if (n > 0)
	{
		int x = 0;

		while (x < n)
		{
			int y = 0;
			int z = 0;

			while (y < (n + 1 - x))
			{
				_putchar(' ');
				y++;
			}

			while (z < (x + 1))
			{
				_putchar('#');
				z++;
			}
			if (x != (n - 1))
				_putchar('\n');
			x++;
		}
	}
	_putchar('\n');
}
