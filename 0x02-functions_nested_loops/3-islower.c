#include "main.h"

/**
 * _islower - character check for case
 * @c: The character to be checked
 * Checks if character is lowercase
 *
 * Return: 1 if the number is lower. 0 otherwise.
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
