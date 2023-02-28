#include "main.h"
/**
 *
 *
 *
 */

void rev_string(char *s)
{
	int count;
	int i;

	for (count = 0; s[count] != '\0'; count++)
		continue;
	for (i = 0; i < (count / 2); i++)
	{
		s[i] = s[count - i];
	}
	for (count = 0; s[count] != '\0'; count++)
		_putchar (s[count]);
