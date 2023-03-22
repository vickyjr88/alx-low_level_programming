#include "main.h"

/**
 * times_table - prints times table
 *
 * Prints times table 0 - 9
 *
 * Return: void
 */

void times_table(void)
{
	int x = 0;

	while (x < 10)
	{
		int y = 0;

		while (y < 10)
		{
			int z = y * x;
			if (z < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
				if(y < 9)
					_putchar(',');
			} else
			{

				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				if (y < 9)
					_putchar(',');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
