#include <stdio.h>

/**
 * main - prints alphabet in lower cases with new line
 * Return: return value 0 for successful operation
*/

int main(void)
{
	void print_alphabet(void)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
	}
	return (0);
}
