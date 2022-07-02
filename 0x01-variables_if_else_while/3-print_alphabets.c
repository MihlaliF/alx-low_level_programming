#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing A-Z in upper ad lower cases
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putcher(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putcher(ch);
	putcher('\n');

	return (0);
}
