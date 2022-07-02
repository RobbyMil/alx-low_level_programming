#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digits numbers of base 10 starting from 0
 * Return: returns value 0 for success
*/

int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);

