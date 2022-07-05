# include "main.h"

/**
 * main - check for lower case letter in a string
 * Returns: return 1 if lowercase and 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{ return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
