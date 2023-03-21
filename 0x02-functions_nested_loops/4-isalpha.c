#include "main.h"

/**
 * _isalpha - character check alphabet
 * @c: The character to be checked
 * Checks if character is alphabet
 *
 * Return: 1 if the character is alphabet. 0 otherwise.
 */
int _isalpha(char c)
{
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int result = 0;
	int x = 0;

	while (x < 52)
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
