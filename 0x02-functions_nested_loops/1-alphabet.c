#include "main.h"

/**
 * print_alphabet - prints alphabet in lower cases with new line
 * Return: return value 0 for successful operation
*/

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

