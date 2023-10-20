#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * print_char - A function That print a sing character
 * @won: variable arguiment
 * Return: (0)
 */
int print_char(va_list won)
{
	int str = va_arg(won, int);

	_putchar(str);
	return (1);
}
