#include "main.h"
/**
 * _islower - function to check is char is lowercase
 *
 * @c: parameter to be printed
 *
 * Return:1 lowercase
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

