#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int anum, a;

	for (a = 0; a <= 9; a++)
	{
		for (anum = 0; anum <= 14; anum++)
		{
			if (anum > 9)
			{
				_putchar((anum / 10) + '0');
			}
			_putchar((anum % 10) + '0');
		}

		_putchar('\n');
	}
}
