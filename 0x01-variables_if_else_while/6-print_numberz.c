#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: prints numbers zero to nine on one line
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 9; ++i)
	putchar('0' + i);
	putchar('\n');
	return (0);
}
