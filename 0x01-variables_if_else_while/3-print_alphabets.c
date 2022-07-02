#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all alphabets letters in lower cases then in upper cases
 * Return: returns value 0 to signify success
*/

int main(void)
{
	char lowers;

	char uppers;

	lowers = 'a';

	uppers = 'A';

	while (lowers <= 'z' && uppers <= 'Z')
	{
		while (lowers <= 'z')
		{
			putchar(lowers);
			lowers++;
		}
		while (uppers <= 'Z')
		{
			putchar(uppers);
			uppers++;
		}
	}
	putchar('\n');
	return (0);
}
