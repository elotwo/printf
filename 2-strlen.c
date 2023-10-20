#include <stdio.h>
#include "main.h"
/**
 * _strlen - A program thats returns a string length
 * @s: Pionter variable s
 * Return: (str) Success
 */
int _strlen(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		str++;
	}

	return (str);
}
/**
 *  _strlenc - A program thats returns a string length
 *   @s: Pionter variable s
 *   Return: (0)
 */
int _strlenc(const char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		str++;
	}
	return (str);
}
