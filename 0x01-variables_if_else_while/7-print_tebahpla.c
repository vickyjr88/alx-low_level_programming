#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 26;
	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	while (a >= 0)
	{
		putchar(letters[a]);
		a--;
	}
	putchar('\n');
	return (0);
}
