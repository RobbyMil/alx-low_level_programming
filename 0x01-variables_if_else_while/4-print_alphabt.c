#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all alphabet except 'q' and 'e'. all in lower cases.
 * Return: returns value 0 for successful operation
*/

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters == 'e')
		{
			letters++;
		}
		else if (letters == 'q')
		{
			letters++;
		}
		putchar(letters);
		letters++;
	}
	putchar ('\n');
	return (0);
}
