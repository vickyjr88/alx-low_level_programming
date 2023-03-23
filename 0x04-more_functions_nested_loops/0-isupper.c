#include "main.h"

/**
 * _isupper - character check for uppercase
 * @c: The character to be checked
 * Checks if character is uppercase
 *
 * Return: 1 if the number is upper. 0 otherwise.
 */
int _isupper(char c)
{
	char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
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
