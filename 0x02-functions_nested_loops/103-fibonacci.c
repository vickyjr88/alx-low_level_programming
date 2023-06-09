#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints Fibinaci numbers sum
 *
 * Prints um of obonacci numbers with values less than 400k
 *
 * Return: 0
 */

int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long n3 = 0;
	long sum = 2;

	while (n3 <= 4000000)
	{
		n3 = n1 + n2;

		n1 = n2;
		n2 = n3;

		if ((n3 % 2) == 0)
			sum += n3;
	}
	printf("%ld\n", sum);
	return (0);
}
