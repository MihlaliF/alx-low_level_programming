#include <stdio.h>
#include <unistad.h>

/**
 * _putchar - Entry point, performs the same function as putchar
 * Return: Value of function
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
