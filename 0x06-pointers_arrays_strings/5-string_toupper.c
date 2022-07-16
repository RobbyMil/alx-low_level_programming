#include "main.h"

/**
 * string_toupper - ALL CAPS letters in a given strina
 * @s: string argument
 * Return: capitalized string
*/

char *string_toupper(char *s)
{
	int i = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		
		return (s)
	}
