#include "main.h"

/**
 * main - Entry point
 *
 * Prints alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char characters[] = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	while (x < 26)
	{
		_putchar(characters[x]);
		x++;
	}
	_putchar('\n');
}
