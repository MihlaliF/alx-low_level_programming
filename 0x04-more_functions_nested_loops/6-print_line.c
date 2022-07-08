#include "main.h"

/**
 * print_line - prints number of underscure
 * @n: number of underscores to be printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; 1 < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
