#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints combinations of dogits from 0 to 100
 * used ASCII codes for characters
 * duplicates are not allowed e.g 10 == 01 or 20 == 02..etc * Return: returns value 0 for successful operarion
*/

int main(void)
{
	int d1 = 48;

	int d2 = 49;

	int comma = 44;

	int space = 32;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = d1+1; d2 <= 57; d2++)
		{
			putchar(d1);
			putchar (d2);
			if (d1 != 56 || d2 != 57)
			{
				putchar(comma);
				putchar(space);
			}
		}
	}
	putchar('\n');
	return (0);
}
