#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha <= 'a'; alpha--)
	{
		putchar(alpha);
	}

	return (0);
}
