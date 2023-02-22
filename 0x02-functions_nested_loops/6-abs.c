#include "main.h"

/**
 * _abs - this function get the abslute value
 *
 *@i : parameter to be printed
 *
 * Return: always 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	else
	{
		i = i;
	}
	return (i);
}
