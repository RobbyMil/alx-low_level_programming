#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints single digits of base 10 starting from 0
 * used ASCII table to map DEC values to char from 0-9
 * DEC values from 48 to 57 matches digits 0-9
 * declared and initialized int variable num with 47
 * used while loop to putchar num and increment it +1 untilnum == 57
 * Return: returns value 0 for successful operation
**/

int main(void)
{
	int num = 47;
	
	while (num<= 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
