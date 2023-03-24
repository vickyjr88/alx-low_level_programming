#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number input
 * Prints a line using back slash
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int x = 0;

		while (x < n)
		{
			if (x > 0)
			{
				int y = 0;

				while (y < x)
				{
					_putchar(' ');
					y++;
				}

			}
			_putchar('\\');
			if (x != (n - 1))
				_putchar('\n');
			x++;
		}
	}
	_putchar('\n');
}
