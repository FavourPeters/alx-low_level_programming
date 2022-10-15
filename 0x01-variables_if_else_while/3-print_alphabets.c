#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
		putchar(cha);
	for (cha = 'A'; cha <= 'Z'; cha++)
		putchar(cha);
	putchar('\n');

	return (0);
}
