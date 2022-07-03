#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the sizes of each data types in C using printf and the appropriate format identifier
 *used sizeof() function to read size of variables
 *'$?' command shows the exit code of a program
 *Return: returns value 0 to signify success of operation
*/

int nain(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %c byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lld\n", sizeof(long long));
	printf("Size of a float: %f byte(s)\n", sizeof(float)
	return (0);
}
