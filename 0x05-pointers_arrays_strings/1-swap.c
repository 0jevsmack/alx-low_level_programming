#include "main.h"

/**
 * swap_int - swaps values of two int
 * @a: value 1
 * @b: value 2
 * Return: int
 */

void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
}
