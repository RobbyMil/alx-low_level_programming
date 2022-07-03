#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lower case alphabet in reverse
 * declare and initialize var letter of typy char
 * initialize var letter with value 'z'
 * used while loop with condition:
 * while letter >= 'a' print letter & decrement letter-1
 * print newline
 * Return: returns value 0 for success
*//

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
