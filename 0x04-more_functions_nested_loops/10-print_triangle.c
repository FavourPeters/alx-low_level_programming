#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 */
void print_triangle(int n)
{
	int a, tri;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (tri = n - a; tri > 0; tri--)
				_putchar(' ');

			for (tri = 0; tri < a; tri++)
				_putchar('0');
			if (a == n)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
