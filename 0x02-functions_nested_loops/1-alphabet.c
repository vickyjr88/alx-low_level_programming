#include "main.h"

/**
 * print_alphabet - prints the alphabets
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
