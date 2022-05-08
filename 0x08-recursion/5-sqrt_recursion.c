#include "main.h"

/**
 * sqrt_a - returns the natural squareroot of a number
 * @a: number
 * @b: root
 * Return: ALways 0
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - check the code
 * @n: number
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
