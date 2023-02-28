#include "main.h"

/**
 *_puts - function that prints
 *
 *@str: a string to be printed
 *
 * Return: always 0;
 */

void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		_putchar (str[count]);
	_putchar ('\n');
}
