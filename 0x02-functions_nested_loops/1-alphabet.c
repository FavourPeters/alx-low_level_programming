#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char lowc;

	for (lowc = 'a'; lowc <= 'z'; lowc++)
		_putchar(lowc);

	_putchar('\n');
}
