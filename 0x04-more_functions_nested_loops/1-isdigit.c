#include "main.h"

/**
 * _isdigit - character check for digit
 * @c: The integer to be checked
 * Checks if intager is digit
 *
 * Return: 1 if the character is a number. 0 otherwise.
 */
int _isdigit(int c)
{
	char characters[] = "01234556789";
	int result = 0;
	int x = 0;

	while (x < 11)
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
