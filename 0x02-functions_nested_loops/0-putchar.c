#include <unistd.h>
#include "main.h"
/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int alx[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(alx[i]);

		_putchar('\n');

	return (0);
}
