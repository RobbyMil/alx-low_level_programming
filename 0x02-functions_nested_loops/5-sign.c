# include "main.h"

/**
 * print_sign - checks if argument is positive or negative
 * @n: argument to be checked
 * Return: if c is < 0 returns 1 and prints +
 * if c is 0 returns 0 and prints 0
 * if c is < 0 returns -1 and prints -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
