#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	char letters[] = "abcdef";

	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}

	while (a < 6)
	{
		putchar(letters[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
