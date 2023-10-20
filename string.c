#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 * _strings - function that prints strings
 * @val: variable arguiment
 * Return: (0);
 */
int _strings(va_list val)
{
	int i;
	char *str;
	int n;

	str = va_arg(val, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	n = _strlen(str);
	for (i = 0; i < n;  i++)
	{
		putchar(str[i]);
	}
	return (0);
}
