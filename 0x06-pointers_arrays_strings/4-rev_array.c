#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array to reverse
 * @n: total number of elements in array
*/

void reverse_array(int *a, int n)
{
	int tmp, strt = 0;

	int end = n - 1;

	while(strt < end)
	{
		tmp = *(a + strt);
		*(a + strt) = *(a + end);
		*(a + end) = tmp;
		strt++; end--;
	}
}
