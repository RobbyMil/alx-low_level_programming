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
 * @strg: string argument
*/

void puts2(char strg)
{
	int x;

	for (x=0; strg[x] != '\0' && x < _strlen(strg); x+=2)
	{
		putchar(strg[x]);
	}
	putchar('\n');
}
