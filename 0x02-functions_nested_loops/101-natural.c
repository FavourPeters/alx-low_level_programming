#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fsum, ssum, sum;
	int i;

	fsum = 0;
	ssum = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			fsum = fsum + i;
		} else if ((i % 5) == 0)
		{
			ssum = ssum + i;
		}
	}
	sum = fsum + ssum;
	printf("%lu\n", sum);
	return (0);
}
