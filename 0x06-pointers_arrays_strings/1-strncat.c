# include "main.h"

/**
 * _strncat - concatenate n byte
 * @dest: destination string
 * @src: source string
 * @n: n byte
 * Return: concatenated str.
*/

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;

	int i = 0;

	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[i] != [n])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
