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

	while (x < 10)
	{
		while (y < 10)
		{
			if (x != y)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (x < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y = x + 1;
		x++;
	}
	putchar('\n');
	return (0);
}
