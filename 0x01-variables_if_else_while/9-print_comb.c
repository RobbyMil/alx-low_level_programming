#include <stdio.h>
#include <stdlib h>

/**
 *main - print combination of single digits numbers in ascending order
 *digits are separeted by comma and  space
 *NO char var type allowed
 *ONLY use putchar() to print in std output
 *used ASCII code DEC values to store in int var comma and space
 *Return: returns 0 for successful operation
*/

int main(void)
{
	int digit = 48;

	int space = 32;

	int comma = 44;

	while (digit <= 57)
	{
		putchar(digit);
		putchar(comma);
		putchar(space);
		digit++;
	}
	putchar('\n');
	return (0);
}

