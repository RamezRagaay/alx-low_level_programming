#include <stdio.h>
/**
 * main - this is the main function
 * 
 * Return: always 0
 */
int main()
{

	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (c = 'A' ; c <= 'Z' ; c++)
	{
        	putchar(c);
	}
	printf("\n");
    return 0;
}
