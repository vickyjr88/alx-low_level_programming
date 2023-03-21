#include "main.h"

/**
 * main - Entry point
 *
 * Prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char characters[] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		_putchar(characters[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
