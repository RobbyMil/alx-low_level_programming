# include "main.h"

/**
 * _strlen - returns the lenght of a string argument
 * @s: string argument
 * Return: lenght of s
*/

int _strlen(char *s)
{
	int len = 0;

	while (s != '\0')/*'\0' is empty string character*/
	{
		len++;
		s++;
	}
	return (len);
}
