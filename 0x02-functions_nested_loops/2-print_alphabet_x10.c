#include "main.h"

/**
 * print_alphabet - prints the alphabets
 *
 * Prints alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char characters[] = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	while (x < 10)
	{
		int y = 0;

		while (y < 26)
		{
			_putchar(characters[y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
