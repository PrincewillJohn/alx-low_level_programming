#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 *
 * Description: Numbers must be seperated by comma and space.
 *
 * Numbers should be displayed in the same order they are stored in array
 * You can also use printf
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
		printf(",");
		}
	}
	printf("\n");
}
