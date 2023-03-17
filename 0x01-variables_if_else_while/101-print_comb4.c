#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 1;
	int z = 2;

	while (x < 10)
	{
		while (y < 10)
		{
			while (z < 10)
			{
				if (x != y && y != z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			z = y + 1;
			y++;
		}
		y = x + 1;
		x++;
	}
	putchar('\n');
	return (0);
}
