#include "main.h"
/**
 * print_sign - function print the sign of intger
 *
 * @n: parameter to be printed
 *
 * Return: 1 if postive
 * -1 if negative
 *  and 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
