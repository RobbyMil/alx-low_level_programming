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
 * puts_half - print string in half
 * @str: string argument
*/

void puts_half(char *str)
{
	int ltr;

	int len = _strlen(str);

	if (len % 2 != 0)
	{
		ltr = (len / 2) + 1;
	}
	else
	{
		ltr = (len / 2);
	}
	while (ltr < len)
	{
		putchar((*str + ltr));
	ltr++;
	}
	putchar('\n');
}


