#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	while (a < 26)
	{
		if (letters[a] != 'e' && letters[a] != 'q')
			putchar(letters[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
