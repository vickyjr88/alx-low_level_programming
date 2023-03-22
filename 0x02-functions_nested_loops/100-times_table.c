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
 * print_times_table - prints times table
 * @n: input integer
 * Prints times table 0 - 15
 *
 * Return: void
 */

void print_times_table(int n)
{
	if (n > 0 && n < 16)
	{
		int bazu = n + 1;
		int x = 0;

		while (x < bazu)
		{
			int y = 0;

			while (y < bazu)
			{
				int z = y * x;

				if (z == 0)
				{
					if (y != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0');
				} else if (z > 0 && z < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}else if (z > 0 && z < 100)
				{
					_putchar(' ');
					print(z);
				} else
				{
					print(z);	
				}
				if (y < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
}
