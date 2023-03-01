#include "main.h"
/**
 *print_rev - function to reverse string
 *
 * @char: parameter
 * Return: always 0;
 */
int _putchar(char);

void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		continue;
	for (count -= 1; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
