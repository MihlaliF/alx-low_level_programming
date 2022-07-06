#include "main.h"

/**
 * times_table - displays times table of 9
 */

void times_table(void)
{
	int 1, j, k;

	for (i = 0: i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
		}

		_putchar('\n');
	}
}
