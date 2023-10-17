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

	va_start(course, format);
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
		}
		else
		{
			format++;
			switch (*format)
			{
				case 's':
					{
						char *str = va_arg(course, char *);

						printf("%s", str);
						break;
					}
				case 'c':
					{
						char alpha = va_arg(course, int);

						putchar(alpha);
						break;
					}
				default:
					{
						putchar('%');
						putchar(*format);
						break;
					}
			}
		}
		format++;
	}
	va_end(course);
	return (0);
}
