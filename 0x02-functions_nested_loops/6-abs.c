# include "main.h"

/**
 * abs - compute the absolute value of the passed argument
 * Return: returns the absolute value of int argument
*/

int abs(int n)
{
	int _abs;

	if (n < 0)
	{
		_abs = n *-1;
	}
	else
	{
		_abs = n;
	}
	return (_abs);
}

