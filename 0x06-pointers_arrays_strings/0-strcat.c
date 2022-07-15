#include "main.h"

/**
 * _strcat - performs concatenation of two strings
 * @dest: first string
 * @src: second string
 * Return: returns concatenated string with empty string character appended
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j = 0;

	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
