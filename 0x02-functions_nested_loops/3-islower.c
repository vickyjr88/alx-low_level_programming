#include "main.h"

/**
 * _islower - character check
 *
 * Checks if character is lowercase
 *
 * Return: Always 0 (Success)
 */
int _islower(char c)
{
	char characters[] = "abcdefghijklmnopqrstuvwxyz";
	int result = 0;
	int x = 0;

	while (x < 26)
	{
		if (c == characters[x])
		{
			result = 1;
			break;
		}
		x++;
	}
	return (result);
}
