# include "main.h"

/**
 * print_sign - checks if argument is positive or negative
 * @c: argument to be checked
 * Return: if c is < 0 returns 1 and prints +
 * if c is 0 returns 0 and prints 0
 * if c is < 0 returns -1 and prints -
*/

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
