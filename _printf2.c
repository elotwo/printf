#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - A program that prints all format of characters
 * @format: A varadic variable for entering characters
 * Return: (0)
 */
int  _printf(const char *format, ...)
{
	int i = 0;
	char *str;
	va_list list;

	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(list, int));
					break;
				case 's':
					str = va_arg(list, char *);
					_strings(str);
					break;
				case 'd':
					num_n(va_arg(list, int));
					break;
				case 'i':
					num_n(va_arg(list, int));
					break;
				case 'b':
					print_binary(va_arg(list, int));
					break;	
				case '%':
					_putchar('%');
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					break;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(list);
	return (0);
}
