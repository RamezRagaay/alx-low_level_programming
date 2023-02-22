#include "main.h"

/**
 * print_last_digit - function that print the last digit of a num
 *
 * @num : a parameter to be used
 *
 * Return: last_digit
 */
int print_last_digit(int num)
{
	
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
		last_digit = last_digit * -1;
	return (last_digit);
}
