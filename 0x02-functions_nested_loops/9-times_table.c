#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 12; i++)
		_putchar(9 * i);
	_putchar('\n');
}
