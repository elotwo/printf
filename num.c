#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * num_n - A program that prints numbers
 * @n: variable for integer value
 * Return: (0)
 */
int num_n(int n)
{
	int a = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 9)
		num_n(n / 10);
	_putchar('0' + (a % 10));
	return (0);
}

