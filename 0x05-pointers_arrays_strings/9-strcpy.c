#include "main.h"

/**
 * _strlen - returns the lenght of a string argument
 * @s: string argument
 * Return: lenght of s
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')/*'\0' is empty string character*/
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copy the string pointed
 * @dest: copy source here
 * @src: this is tue source
 * Return: returns copy of original
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
