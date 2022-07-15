#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: first string
 * @s2: second string
 * Return: value of the space difference between str1&str2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while(*(s1 + i) == *(s2 + i) && *(s1 + i))
	{
		i++;
	}
	if(*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
