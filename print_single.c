#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 */
int print_char(va_list won)
{
	int str = va_arg(won, int);
	_putchar(str);
	return (1);
}
