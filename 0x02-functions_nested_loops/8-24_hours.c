#include "main.h"

/**
 * jack_bauer - prints every minute
 *
 * Prints minutes
 *
 * Return: void
 */

void jack_bauer(void)
{
	int x = 0;

	while (x < 24)
	{
		int y = 0;

		while (y < 60)
		{
			if (x < 10)
			{
				_putchar('0');
				_putchar('0' + x);
			} else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			_putchar(':');
			if (y < 10)
			{
				_putchar('0');
				_putchar('0' + y);
			} else
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
			_putchar('\n');
			y++;
		}
		x++;
	}
}
