#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all 3 digits numbers from 0 to 1000
 *numbers made of same 3 digits already printed NOT allowed *e.g. 120 is considered same as 210 or 012
 * used ASCII table for mapping int values to charaters
 * used nested for loops
 * Return: returns value 0 for a successful operation
*/

int main(void)
{
	int d1 = 47;

	int d2 = 48;

	int d3 = 49;

	int comma = 44;

	int space = 32;

	for (d1 = 47; d1 <= 58; d1++;)
	{
		for (d2 = 48; d2 <= 58; d2++;)
		{
			for (d3 = 48; d3 <= 58; d3++;)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);
				if (d1 != 55; || d2 != 56; || d3 != 57;)
				{
					putchar(comma);
					putchar(space);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
