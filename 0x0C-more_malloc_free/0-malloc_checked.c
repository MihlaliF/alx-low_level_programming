#include "main.h"
#include <stdlib.h>

/**
 * mallo_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: check code
 */

void *malloc_checkout(unsigned int b)
{
	void *s;

	s  malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
