# include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: argument passed. number to extract last digit
 * Return: returns the last digit of n
*/

int print_last_digit(int n)
{
	int abs;

	int res = n % 10;

	if (n < 0)
	{
		abs = n * -1;
		_putchar('0' + abs);
	}	
	return (res);
}
