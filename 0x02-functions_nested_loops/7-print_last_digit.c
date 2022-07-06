# include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: argument passed. number to extract last digit
 * Return: returns the last digit of n
*/

int print_last_digit(int n)
{
	int abs;
	
	int abs_res;

	int res = (n % 10 * 11);

	if (n < 0)
	{
		abs = n * -1;
		abs_res = (abs % 10 * 11);
		return (abs_res);
	}	
	return (res);
}
