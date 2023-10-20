#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - varadic function that print formatted strings
 * @format: string variable
 * Return: (0)
 */
int _printf(const char *format, ...)
{
	va_list course;
	int n = prit_per(); 

	va_start(course, format);
	while (*format)
	{
		if (*format == n)
		{
			format++;
			char specifier = *format;
			if (specifier == 'd' || specifier == 'i')
			{
				int num = va_arg(course, int);
			}
			else if (specifier == 'c')
			{
				int ch = va_arg(course, int);
				_single(ch);
			}
			else if (specifier == 's')
			{
				char * str = va_arg(course, char *);
				_strings(str);
			}
			else
			{
				putchar(n);
				if (specifier != n)
				{
					putchar(specifier);
				}
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(args);
}
