#include "_putchar.c"

/**
 * main - Entry point
 *
 * Prints _putchar
 *
 * Return: Always 0 (Success)
 */
void word_display(void)
{
	char characters[] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		_putchar(characters[x]);
		x++;
	}
	_putchar('\n');
}
