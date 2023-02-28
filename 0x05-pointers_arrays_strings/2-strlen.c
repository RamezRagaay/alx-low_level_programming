#include "main.h"
/**
 *_strlen - functionto count chars in string
 *
 * @s: string to be counted
 *
 *Return: (count);
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count);
	return count;
}
