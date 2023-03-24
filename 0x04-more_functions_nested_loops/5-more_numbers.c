#include "main.h"

/**
 * more_numbers - prints digits
 * prints digits from 0 - 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int x = 0;

		while (x < 15)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
				_putchar(x + '0');
			x++;
		}
		_putchar('\n');
		i++;
	}
}
