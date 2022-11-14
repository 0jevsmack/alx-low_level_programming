#include "main.h"
/**
 * _isalpha - checks for both cases
 * @c:  char to be checked for case
 * Return: 1 if c is upper or lower else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
