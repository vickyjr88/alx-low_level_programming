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
	long double n1 = 1;
	long double  n2 = 2;
	long double n3;
	int i;
	int number = 99;

	printf("%.0Lf, %.0Lf, ", n1, n2);

	for (i = 3; i < number; ++i)
	{
		n3 = n1 + n2;

		if (i == (number - 1))
			printf("%.0Lf\n", n3);
		else
			printf("%.0Lf, ", n3);

		n1 = n2;
		n2 = n3;
	}
	return (0);
}
