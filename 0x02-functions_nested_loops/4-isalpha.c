#include "main.h"

/**
 *_isalpha - function that check alphabet
 *
 *Return: 1 if alphabet
 *and 0 otherwise
 *
 * @c: parameter to be printed
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
