#include <stdio.h>
#include <stdarg.h>
/**
 */
int _printf(const char *format, ...)
{
	va_list course;
	va_start(course, format);
	while(*format)
	{
		if (*format != '%')
		{
			putchar(*format);
		}
		else
		{
			format++;
			switch(*format)
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
int main(void)
{
	char *dem = "Elochukwu";
	char us = 'A';
	_printf("string: %s\n single character: %c\n", dem, us);
	return(0);
}
