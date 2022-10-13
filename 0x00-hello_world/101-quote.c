/**
 * function: to print
 * Dora Korpar quote
 */

#include <unistd.h>

/**
 * main - prints "and that piece of art is useful etc:" main entry
 *
 * Return: always 1. exit point
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
