# include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: argument passed. number to extract last digit
 * Return: returns the last digit of n
*/

int print_last_digit(int n)
{ 

	if (n < 0)
	{
		n*=-1;

		return (n % 10);
	}
	else
		return (n % 10);
}
