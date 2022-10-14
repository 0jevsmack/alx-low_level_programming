#include <stdio.h>
/**
 * main - prints alphabets in lower case
 *
 * Return: 0 on completion
 */

int main(void)
{
	int x;

	for (x = 'A'; x < 'Z'; x++)
	{
		x = tolower(x);

		putchar(x);
	}
	return (0);
}
