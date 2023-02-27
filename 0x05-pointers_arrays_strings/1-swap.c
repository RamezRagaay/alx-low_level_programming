#include "main.h"
/**
 *swap_int - function to swap pointers
 *
 * @a: prameter to be returned
 * @b: prameter to bereturned
 *
 *Return: always 0;
 */

void swap_int(int *a, int *b)
{

	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
