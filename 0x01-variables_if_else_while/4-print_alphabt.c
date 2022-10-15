#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except from q and e
 * Return: Always 0
 */
int main(void)
{
	char loa;

	for (loa = 'a'; loa <= 'z'; loa++)
	{
		if (loa != 'e' && loa != 'q')
			putchar(loa);
	}

	putchar('\n');

	return (0);
}
