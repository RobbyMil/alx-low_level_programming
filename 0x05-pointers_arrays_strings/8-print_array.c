# include "main.h"

/**
 * print_array - prints elements of a list
 * @a: array
 * @n: elements of array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

