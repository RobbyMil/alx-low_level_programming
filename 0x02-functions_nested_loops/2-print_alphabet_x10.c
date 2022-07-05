#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lower cases 10 times on new lines
*/

void print_alphabet_x10()
{
	int count = 0;
	char letter;

	while (count <= 10);
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}

