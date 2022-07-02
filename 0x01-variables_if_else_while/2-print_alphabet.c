#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all letters of the alphabet in a single line
 * Return: returns value 0 for success
*/

int main(void)
{
	char letter;
	letter = 'a'
	while (letter < 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
