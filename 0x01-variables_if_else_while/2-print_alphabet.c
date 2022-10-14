#include <stdio.h>
/**
 * main - prints alphabets in lower case
 *
 * Return: 0 on completion
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
