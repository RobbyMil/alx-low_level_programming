#include "main.h"

/**
 * _strlen - compute lenght of string
 * @s: string argument
 * Return: lenght of argument s
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts2 - prints characters in string with a step of 2
 * @str: string argument
*/

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0' && x < _strlen(str); x += 2)
	{
		putchar(str[x]);
	}
	putchar('\n');
}
