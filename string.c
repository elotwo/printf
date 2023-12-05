#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 * _strings - function that prints strings
 * @val: variable arguiment
 * Return: (0);
 */
int _strings(char *str)
{
	int i;
	int n;
	if (str == NULL)
	{
		str = "(null)";
	}
	n = _strlen(str);
	for (i = 0; i < n;  i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
