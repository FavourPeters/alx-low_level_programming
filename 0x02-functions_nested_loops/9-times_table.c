#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int n, m, pro;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			pro = n + m;

			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((pro / 10) + '0');
			_putchar((pro % 10) + '0');
		}
		_putchar('\n');
	}
}
