# include "main.h"

/**
 * _abs - compute the absolute value of the passed argument
 * @n: argument to be computed
 * Return: returns the absolute value of int argument
*/

int _abs(int n)
{
	int absval;

	if (n < 0)
	{
		absval = n * -1;
		return (absval);
	}
	else if (n >= 0)
	{
		absval = n;
		return (absval);
	}
	return (0);
}

