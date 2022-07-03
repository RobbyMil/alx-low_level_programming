#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints all num and letters in base 16
 *used nested while loop to verify two conditions
 *used ASCII table to map Dec values matching char in var digit
 *Return: returns 0 for successful operation
*/

int main(void)
{
	char letter = 97;

	int digit = 48;

	while (digit <= 57 && letter <= 102)
	{
		while (digit <= 57)
		{
			putchar(digit);
			digit++;
		}
		while (letter <= 102)
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
