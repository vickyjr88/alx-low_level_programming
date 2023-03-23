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
	long n1 = 1;
	long n2 = 2;
	long n3;
	int i;
	int number = 50;

	printf("%ld, %ld, ", n1, n2);

	for (i = 2; i < number; ++i)
	{
		n3 = n1 + n2;
		if (i == (number - 1))
			printf("%ld\n", n3);
		else
			printf("%ld, ", n3);

		n1 = n2;
		n2 = n3;
	}
	return (0);
}
