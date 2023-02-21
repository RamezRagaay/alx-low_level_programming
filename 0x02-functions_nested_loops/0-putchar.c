#include <stdio.h>
#include "main.h"
/**
 * main - this is the main function
 *
 * Return: aalways 0
 */
int main(void)
{

	int count;
	char message[] = "_putchar";

	for (count = 0; count < 9; count++)
	{
		_putchar(message[count]);
	}
	return (0);
}
