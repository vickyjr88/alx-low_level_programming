#include <stdlib.h>
#include <stdio.h>

/**
 * main - computes sum value
 * @n: The integer to be worked on
 * Computes the sum of number disible by either 3 or 5
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;
	int s = 0;

	while (x < 1024)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			s += x;
		x++;
	}
	printf("%d\n", s);
	return (0);
}
