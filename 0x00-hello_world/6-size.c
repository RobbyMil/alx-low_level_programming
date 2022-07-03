#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the sizes of each data types in C using printf and the appropriate format identifier
 *used sizeof() function to read size of variables
 *'$?' command shows the exit code of a program
 *Return: returns value 0 to signify success of operation
*/

int main(void)
{
	int a;

	char b;

	float c;

	long int d;

	long long int e;

	printf("Size of a char: %d byte(s)\n", sizeof(b));
	printf("Size of an int: %c byte(s)\n", sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a long long int: %lld\n", sizeof(e));
	printf("Size of a float: %f byte(s)\n", sizeof(c));
	return (0);
}
