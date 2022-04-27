#include "main.h"
/**
 * _strcmp - compares two strings 
 * @s1: first string
 * @s2: second string
 * Return: negative if s1 < s2; zero if matching and positive int if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}
