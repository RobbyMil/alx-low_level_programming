# include "main.h"

/**
 * _puts - print a new line after a string
 * @str: string argument
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
