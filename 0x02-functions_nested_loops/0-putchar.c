#include "Putchar.c"

/**
 * main - prints Putchar
 *
 * Decription: prints Putchar
 *
 * Return 0 (Success)
 */

int main (void)
{
	char text[10] = "Putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
