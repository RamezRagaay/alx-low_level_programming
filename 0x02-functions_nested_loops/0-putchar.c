#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: aalways 0
 */
int main(void)
{
	char message[] = "_putchar";
	for (int count = 0; count < 9; count++)
	{
		putchar(message[count]);
	}
	putchar('\n');
	return (0);
}
