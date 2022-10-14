#include <stdio.h>
/**
 * main - program prints alphabets in both cases
 *
 * Return: 0 to exit
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
