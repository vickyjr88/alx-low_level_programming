#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints Fibinaci numbers
 *
 * Prints Fobonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int n3;
	int i;
	int number = 50;

	printf("\n%d, %d, ", n1, n2);

	for (i = 2; i < number; ++i)
	{
		n3 = n1 + n2;
		if (i == (number - 1))
			printf(" %d\n", n3);
		else
			printf(" %d, ", n3);

		n1 = n2;
		n2 = n3;
	}
	return (0);
}
