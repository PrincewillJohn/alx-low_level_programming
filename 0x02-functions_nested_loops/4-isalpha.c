#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The letter to be checked.
 *
 * Return: one if character is a letter, lowercase or uppercase, zero otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
