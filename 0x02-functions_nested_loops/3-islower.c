# include "main.h"

/**
 * _islower - check for lower case letter in a string
 * parameter c: argument to check
 * Return: returns 1 if lowercase and 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{ return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
