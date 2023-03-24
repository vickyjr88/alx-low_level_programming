#include "main.h"

/**
 * print_line - prints a line
 * @n: number input
 * Prints a line using underscores
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int x = 0;

		while (x < n)
		{
			_putchar('_');
			x++;
		}
	}
	_putchar('\n');
}
