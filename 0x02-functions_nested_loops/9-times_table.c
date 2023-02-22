#include "main.h"
/**
 * times_table - function that prints 9 times table
 *
 * Return: always 0
 */

void times_table(void)
{
	int num = 0;
	int count, x;
	int inc = 0;

	for (count = 0; count <= 9; count++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (x != 0)
			{
				if (num < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
			}
			else
			{
				if (num <= 10)
					_putchar(num + '0');
				else
				{
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
			}
			num += inc; }
		num = 0;
		inc++;
		_putchar('\n');
	}}
