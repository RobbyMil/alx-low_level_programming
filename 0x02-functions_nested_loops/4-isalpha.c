# include "main.h"

/**
 * _isalpha - check if argument passed is alphabet
 * c: argument to check
 * Return: returns 1 if argument is alphabet else returns 0*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
