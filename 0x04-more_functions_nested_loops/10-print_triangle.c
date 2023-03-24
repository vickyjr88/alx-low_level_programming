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
		int x = 1;

		while (x < (n + 1))
		{
			int y = 0;
			int z = 0;

			while (y < (n - x))
			{
				_putchar(' ');
				y++;
			}

			while (z < x)
			{
				_putchar('#');
				z++;
			}
			if (x != n)
				_putchar('\n');
			x++;
		}
	}
	_putchar('\n');
}
