#include "main.h"
/**
 * _islower - checks lowerase character
 * @c: - in
 * Return: 1 if lowercase found else 0
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
