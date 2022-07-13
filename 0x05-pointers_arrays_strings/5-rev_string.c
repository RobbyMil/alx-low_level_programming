# include "main.h"

/**
 * _strlen - compute the lenght of a stting
 * @s: argument string
 * Return: lenght of string s
*/

int _strlenght(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		*s++;
	}

	return (len);
}

void rev_string(char *s)
{
	int i = 0;

	int j = (_strlen(*s) - 1);

	char swp;

	while (i < j)
	{
		swp = *s[i];
		*s[i] = *s[j];
		*s[j] = swp;
		i++, j--;
	}
}
