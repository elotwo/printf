#include <stdio.h>
#include <stdarg.h>
#include <stdarg.h>
#include "main.h"
/**
 */
int _printf(const char *format, ...)
{
	va_list args;
	char specifier;
	char per;
	va_start(args, format);
	per = prit_per();
	while(*format)
	{
		if (*format == per)
		{
			format++;
			specifier = *format;
			if (specifier == 'c')
			{
				int che = va_arg(args, int);
				_putchar(che);
			}
			else if (specifier == 's')
			{
				va_arg(args, char *);
				_strings(args);
			}
			else
			{
				putchar(per);
				if (specifier != per)
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
	return (0);
}
