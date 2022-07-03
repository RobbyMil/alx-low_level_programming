#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the sizes of data types using printf and format identifier
 *format id: %d,%c,%lld,%f,%ld,%zu etc...
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

	printf("Size of a char: %zu byte(s)\n", sizeof(b));
	printf("Size of an int: %zu byte(s)\n", sizeof(a));
	printf("Size of a long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(e));
	printf("Size of a float: %zu byte(s)\n", sizeof(c));
	return (0);
}
