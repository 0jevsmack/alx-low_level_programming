#include "main.h"

/**
 * _isupper - checks for upercase character
 *@c: variable for checking
 * Return: 0
 */

int _isupper(int c)
{
	char c;

	if (c == 'A' || c == 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
