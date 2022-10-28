#include "main.h"

/**
 * reverse_array -  reverse an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int m;
	int b;

	for (m = 0; m < n; m++)
	{
		n--;
		b = a[m];
		a[m] = a[n];
		a[n] = b;
	}
}
